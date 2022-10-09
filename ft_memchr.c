/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.ja>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:11:04 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/09 07:19:22 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	uc_c;
	unsigned char	*uc_s;

	count = 0;
	uc_c = (char)c;
	uc_s = (unsigned char *)s;
	while (count < n)
	{
		if (uc_s[count] == uc_c)
			return ((char *)&s[count]);
		count++;
	}

	return (NULL);
}
