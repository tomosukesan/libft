/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:45:23 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/08 20:29:22 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	count;
	char	uc_c;

	count = 0;
	uc_c = (unsigned char)c;
	while (count <= ft_strlen(s))
	{
		if (s[count] == uc_c)
			return ((char *)&s[count]);
		count++;
	}
	return (NULL);
}
