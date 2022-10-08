/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:25:11 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/08 17:30:59 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				count;
	size_t				word_count;
	unsigned char		*uc_dest;
	const unsigned char	*uc_src;

	count = 0;
	uc_dest = (unsigned char *)dest;
	uc_src = (unsigned char *)src;
	if (src < dest)
	{
		word_count = ft_strlen(src) - 1;
		while (word_count >= 0 && count < n)
		{
			uc_dest[word_count] = uc_src[word_count];
			word_count--;
			count++;
		}
	}
	else if (src >= dest)
		dest = ft_memcpy(dest, src, n);
	return (dest);
}
