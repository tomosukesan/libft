/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:37:10 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/27 17:48:58 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;
	size_t	s_len;

	i = 0;
	s_len = 0;
	if (s != NULL)
		s_len = ft_strlen(s);
	if (f == NULL)
		return ;
	while (i < s_len)
	{
		f(i, &s[i]);
		i++;
	}
}
