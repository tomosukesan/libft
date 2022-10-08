/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:55:03 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/08 16:57:26 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				count;
	unsigned char		*uc_dest;
	const unsigned char	*uc_src;

	count = 0;
	uc_dest = (unsigned char *)dest;
	uc_src = (unsigned char *)src;
	while (count < n)
	{
		uc_dest[count] = uc_src[count];
		count++;
	}
	return (dest);
}
