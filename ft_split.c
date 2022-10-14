/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:15:19 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/14 23:50:13 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static
int	count_str(char const *s, char c);
// static
int	count_word(char const *s, char c, int i);

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		str_num;
	int		word_num;

	result = NULL;		// tmp
	i = 0;
	str_num = count_str(s, c) + 1;
	result = malloc(sizeof(char *) * str_num);
	while (i < str_num - 1)
	{
		word_num = count_word(s, c, i);
		result[i] = malloc(sizeof(char) * word_num);
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

int	count_word(char const *s, char c, int i)
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
			return (tail - head);
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
	tail = ft_strchr((const char *)head, '\0');
	return (tail - head);
}
