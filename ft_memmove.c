/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.ja>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:25:11 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/27 14:02:28 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				count;
	unsigned char		*uc_dest;
	const unsigned char	*uc_src;

	count = 0;
	uc_dest = (unsigned char *)dest;
	uc_src = (const unsigned char *)src;
	if (src > dest)
	{
		while (count < n)
		{
			uc_dest[count] = uc_src[count];
			count++;
		}
	}
	else if (src < dest)
		dest = ft_memcpy(dest, src, n);
	return (dest);
}
