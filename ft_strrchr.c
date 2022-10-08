/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:00:31 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/08 20:33:39 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		flag;
	size_t	count;
	char	uc_c;

	flag = 0;
	count = 0;
	uc_c = (unsigned char)c;
	while (count <= ft_strlen(s))
	{
		if (s[count] == uc_c)
			flag = count;
		count++;
	}
	if (flag != 0)
		return ((char *)&s[flag]);
	return (NULL);
}
