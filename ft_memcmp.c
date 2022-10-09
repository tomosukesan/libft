/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.ja>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 08:32:32 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/09 08:37:57 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			count;
	unsigned char	*uc_s1;
	unsigned char	*uc_s2;

	count = 0;
	uc_s1 = (unsigned char *)s1;
	uc_s2 = (unsigned char *)s2;
	while (count < n)
	{
		if (uc_s1[count] < uc_s2[count])
			return (-1);
		else if (uc_s1[count] > uc_s2[count])
			return (1);
		count++;
	}
	return (0);
}
