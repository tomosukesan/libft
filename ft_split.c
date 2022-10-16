/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.ja>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:15:19 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/16 18:35:27 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static
int		count_str(char const *s, char c);
// static
char	*get_word(char const *s, char c, int i, char *result);

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		str_num;

	result = NULL;		// tmp
	i = 0;
	str_num = count_str(s, c) + 1;
	result = malloc(sizeof(char *) * str_num);
	while (i < str_num - 1)
	{
		result[i] = get_word(s, c, i, result[i]);
		if (result[i] == NULL)
		{
			i++;
			while ((--i) >= 0)
				free(result[i]);
			return (NULL);
		}
		printf("result[%d]: %s\n", i, result[i]);
		i++;
	}


	return (result);
}

int	count_str(char const *s, char c)
{
// static
	int		str_num;
	char	*mov_p;

	str_num = 0;
	mov_p = (char *)s;
	while (mov_p)
	{
		mov_p = ft_strchr((const char *)mov_p, (int)c);
		while (mov_p != NULL && *(mov_p + 1) == c)
			mov_p++;
		if (mov_p)
			mov_p++;
		str_num++;
	}
	return (str_num);
}

char	*get_word(char const *s, char c, int i, char *result)
{
// static
	int		str_num;
	char	*head;
	char	*tail;

	str_num = -1;
	head = (char *)s;
	while (head && (str_num++) <= i)
	{
		tail = ft_strchr((const char *)head, (int)c);
		if (tail != NULL && str_num == i)
			break;
		while (tail != NULL && *(tail + 1) == c)
			tail++;
		if (tail)
		{
			tail++;
			head = tail;
		}
		else
			break ;
	}
	if (tail == NULL)
		tail = ft_strchr((const char *)head, '\0');
	result = malloc(sizeof(char) * (tail - head + 1));
	if (result == NULL)
		return(NULL);
	ft_strlcpy(result, (const char *)head, (tail - head + 1));
	return (result);
}
