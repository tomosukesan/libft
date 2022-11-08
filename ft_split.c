/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.ja>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:15:19 by ttachi            #+#    #+#             */
/*   Updated: 2022/11/08 22:46:55 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	count_str(char const *s, char c);
static char		*get_word(char const *s, char c, size_t str_num);
static char		*put_tail(char **head, char c, size_t str_num);

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	str_num;

	i = 0;
	str_num = count_str(s, c);
	result = malloc(sizeof(char *) * (str_num + 1));
	if (result == NULL)
		return (NULL);
	while (i < str_num)
	{
		result[i] = get_word(s, c, i);
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

static size_t	count_str(char const *s, char c)
{
	size_t	str_num;

	str_num = 0;
	if (s == NULL)
		return (0);
	if (c == '\0')
		return (1);
	while (*s == c)
		s++;
	//if (*s == '\0')
	//	return (1);
	while (*s != '\0')
	{
		str_num++;
		s = ft_strchr((const char *)s, (int)c);
		if (s == NULL)
			break;
		while (*(s + 1) == c)
			s++;
		if (*s != '\0')
			s++;
	}
	return (str_num);
}

static char	*get_word(char const *s, char c, size_t str_num)
{
	char	*head;
	char	*tail;
	char	*result;

	if (s == NULL)
		return (NULL);
	if (c == '\0')
		return ((char *)s);
	head = (char *)s;
	while (*head == c)
		head++;
	tail = put_tail(&head, c, str_num);
	result = malloc(sizeof(char) * (tail - head + 1));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, (const char *)head, (tail - head + 1));
	return (result);
}

static char	*put_tail(char **head, char c, size_t str_num)
{
	size_t	i;
	char	*tail;

	i = 0;
	tail = *head;
	while (i <= str_num)
	{
		tail = ft_strchr((const char *)*head, (int)c);
		if (tail == NULL || c == '\0')
			return (ft_strchr((const char *)*head, '\0'));
		if (i == str_num)
			break ;
		while (*(tail + 1) == c)
			tail++;
		if (*tail != '\0')
		{
			tail++;
			*head = tail;
		}
		i++;
	}
	return (tail);
}
