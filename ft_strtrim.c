/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.ja>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:37:18 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/27 13:20:02 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*move_tail(char *head, char const *set);

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
		//result = malloc(sizeof(char));
		//if (result == NULL)
		//	return (NULL);
		//result[0] = '\0';
		result = ft_calloc(1, sizeof(char));
		return (result);
	}
	tail = move_tail(head, set);
	result_len = tail - head + 1;
	result = malloc(sizeof(char) * result_len);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, head, result_len);
	return (result);
}

static char	*move_tail(char *head, char const *set)
{
	char	*tail;

	tail = head;
	while (*tail != '\0')
		tail++;
	while (ft_strrchr(set, (int)(*tail)) != NULL)
		tail--;
	return (++tail);
}
