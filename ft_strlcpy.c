/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:48:35 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/08 14:52:40 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t				count;
	unsigned char		*uc_dest;
	const unsigned char	*uc_src;

	count = 0;
	uc_dest = (unsigned char *)dest;
	uc_src = (unsigned char *)src;
	while (destsize != 0 && count < destsize - 1)
	{
		uc_dest[count] = uc_src[count];
		if (uc_src[count] == '\0')
			return (ft_strlen(src));
		count++;
	}
	if (destsize != 0)
		uc_dest[count + 1] = '\0';
	return (ft_strlen(src));
}
