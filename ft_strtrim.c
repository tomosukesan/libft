/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:37:18 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/17 16:23:30 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	result_len;
	char	*head;
	char	*tail;
	char	*result;

	head = (char *)s1;
	while (*head != '\0' && ft_strchr(set, (int)(*head)) != NULL)
		head++;
	if (*head == '\0')
	{
		result = malloc(sizeof(char));
		result[0] = '\0';
		return (result);
	}
	tail = head;
	while (*tail != '\0')
		tail++;
	while (tail >= s1 && ft_strrchr(set, (int)(*tail)) != NULL)
		tail--;
	result_len = ++tail - head + 1;
	result = malloc(sizeof(char) * result_len);
	ft_strlcpy(result, head, result_len);
	return (result);
}
