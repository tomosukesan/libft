/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:00:26 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/08 18:21:22 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	count;

	if (dest == NULL)
		dest_len = 0;
	else
		dest_len = ft_strlen(dest);
	if (src == NULL)
		src_len = 0;
	else
		src_len = ft_strlen(src);
	count = 0;
	if (dest_len >= destsize && src != NULL)
		return (dest_len + src_len);
	while (dest_len + count < destsize - 1)
	{
		dest[dest_len + count] = src[count];
		if (src[count] == '\0')
			return (dest_len + src_len);
		count++;
	}
	if (destsize != 0)
		dest[dest_len + count + 1] = '\0';
	return (dest_len + src_len);
}
