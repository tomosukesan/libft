/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:45:23 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/21 20:35:56 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	count;
	size_t	s_len;
	char	uc_c;

	count = 0;
	s_len = ft_strlen(s);
	uc_c = (unsigned char)c;
	while (count <= s_len)
	{
		if (s[count] == uc_c)
			return ((char *)&s[count]);
		count++;
	}
	return (NULL);
}
