/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.ja>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:45:23 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/27 14:34:49 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	//size_t	s_len;
	//char	uc_c;

	i = 0;
	//s_len = ft_strlen(s);
	//uc_c = (unsigned char)c;
	//while (count <= s_len)
	while (s[i] != '\0')
	{
		//if (s[count] == uc_c)
		//	return ((char *)&s[count]);
		//count++;
		if(s[i] == c)
			return((char *)&s[i]);
		s++;
	}
	return (NULL);
}
