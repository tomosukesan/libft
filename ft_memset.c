/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.ja>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 04:35:24 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/08 08:52:11 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	size_t			count;
	unsigned char	*uc_buf;

	count = 0;
	// write(1, "here?", 6);
	uc_buf = malloc(sizeof(char) * n);
	if (uc_buf == NULL)
	{
		write(2, "ERROR: Failed to allocate memory in ft_memset.\n", 48);
		return (NULL);
	}
	uc_buf = (unsigned char *)buf;
	while (count < n)
	{
		uc_buf[count] = (unsigned char)ch;
		count++;
	}
	buf = uc_buf;
	free(uc_buf);
	return (buf);
}
