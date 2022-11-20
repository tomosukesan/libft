/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.ja>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:48:35 by ttachi            #+#    #+#             */
/*   Updated: 2022/11/20 09:48:19 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	count;

	count = 0;
	if (destsize == 0)
		return (ft_strlen(src));
	while (count < destsize - 1)
	{
		dest[count] = src[count];
		if (src[count] == '\0')
			return (ft_strlen(src));
		count++;
	}
	dest[count] = '\0';
	return (ft_strlen(src));
}
