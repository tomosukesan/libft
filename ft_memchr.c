/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.ja>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:11:04 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/27 14:09:23 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				count;
	unsigned char		uc_c;
	const unsigned char	*uc_s;

	count = 0;
	uc_c = (unsigned char)c;
	uc_s = (const unsigned char *)s;
	while (count < n)
	{
		if (uc_s[count] == uc_c)
			return ((void *)&s[count]);
			//return ((char *)&s[count]);
		count++;
	}
	return (NULL);
}
