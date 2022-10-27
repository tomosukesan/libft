/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.ja>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:00:26 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/26 18:48:14 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	count;

	if (dest == NULL)
		dest_len = 0;
	else
		dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	count = 0;
	if (dest_len >= destsize)
		return (src_len + destsize);
	while (dest_len + count < destsize - 1 && count < src_len)
	{
		dest[dest_len + count] = src[count];
		count++;
	}
	if (destsize != 0)
		dest[dest_len + count] = '\0';
	return (dest_len + src_len);
}
