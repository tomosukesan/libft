/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:36:25 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/08 21:10:18 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n && (s1[count] != '\0' && s2[count] != '\0'))
	{
		if ((int)s1[count] < (int)s2[count])
			return (-1);
		else if ((int)s1[count] > (int)s2[count])
			return (1);
		count++;
	}
	if (s1[count] == '\0' && s2[count] != '\0')
		return (-1);
	else if (s1[count] != '\0' && s2[count] == '\0')
		return (1);
	return (0);
}
