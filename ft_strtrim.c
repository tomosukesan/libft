/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:37:18 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/21 21:22:06 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static
char	*move_tail(char *head, char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	result_len;
	char	*head;
	char	*tail;
	char	*result;

	if (s1 == NULL)
		return (NULL);
	head = (char *)s1;
	while (*head != '\0' && ft_strchr(set, (int)(*head)) != NULL)
		head++;
	if (*head == '\0')
	{
		result = malloc(sizeof(char));
		result[0] = '\0';
		return (result);
	}
	tail = move_tail(head, s1, set);
	result_len = ++tail - head + 1;
	result = malloc(sizeof(char) * result_len);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, head, result_len);
	return (result);
}

char	*move_tail(char *head, char const *s1, char const *set)
{
// static: too prototype
	char	*tail;

	tail = head;
	while (*tail != '\0')
		tail++;
	while (tail >= s1 && ft_strrchr(set, (int)(*tail)) != NULL)
		tail--;
	return (tail);
}
