/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.ja>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:15:19 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/27 14:35:17 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_str(char const *s, char c);
static int	all_split_c(char const *s, char c);
static char	*get_word(char const *s, char c, int i, char *result);
static char	*put_tail(char **head, char c, int i);

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		str_num;

	i = 0;
	str_num = count_str(s, c);
	if (str_num == 1 && all_split_c(s, c) == 0)
		str_num--;
	result = malloc(sizeof(char *) * str_num + 1);
	if (result == NULL)
		return (NULL);
	while (i < str_num)
	{
		result[i] = get_word(s, c, i, result[i]);
		if (i != 0 && result[i] == NULL)
		{
			while (i >= 0)
				free(result[i--]);
			free(result);
			return (NULL);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}

static int	count_str(char const *s, char c)
{
	int		str_num;
	char	*mov_p;

	str_num = 0;
	if ((s != NULL && s[0] != '\0') && s[0] == c)
		str_num--;
	mov_p = (char *)s;
	while (mov_p != NULL && *(mov_p) != '\0')
	{
		mov_p = ft_strchr((const char *)mov_p, (int)c);
		while ((mov_p != NULL && *(mov_p) != '\0') && *(mov_p + 1) == c)
			mov_p++;
		if (mov_p != NULL && *mov_p != '\0')
			mov_p++;
		str_num++;
	}
	return (str_num);
}

static int	all_split_c(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	s_len;

	i = 0;
	count = 0;
	s_len = ft_strlen(s);
	while (i < s_len)
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return ((int)(s_len - count));
}

static char	*get_word(char const *s, char c, int i, char *result)
{
	char	*head;
	char	*tail;

	head = (char *)s;
	if (head == NULL)
		return (NULL);
	tail = NULL;
	while (*head == c)
		head++;
	tail = put_tail(&(head), c, i);
	if (tail == NULL)
		tail = ft_strchr((const char *)head, '\0');
	result = malloc(sizeof(char) * (tail - head + 1));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, (const char *)head, (tail - head + 1));
	return (result);
}

static char	*put_tail(char **head, char c, int i)
{
	int		str_num;
	char	*tail;

	str_num = -1;
	//while (*head && str_num++ <= i)
	while (*head && (++str_num) <= i)
	{
		tail = ft_strchr((const char *)*head, (int)c);
		if (tail != NULL && str_num == i)
			break ;
		while (tail != NULL && *(tail + 1) == c)
			tail++;
		if (tail)
		{
			tail++;
			*head = tail;
		}
	}
	return (tail);
}
