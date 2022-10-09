/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:00:31 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/09 09:37:37 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	count;
	char	uc_c;

	count = ft_strlen(s) + 1;
	uc_c = (unsigned char)c;
	while (count--)
	{
		if (s[count] == uc_c)
			return ((char *)&s[count]);
	}
	return (NULL);
}
