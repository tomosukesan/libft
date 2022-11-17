/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.ja>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:37:10 by ttachi            #+#    #+#             */
/*   Updated: 2022/11/17 14:27:12 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	size_t			s_len;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	s_len = ft_strlen(s);
	while (s_len--)
	{
		f(i, &s[i]);
		i++;
	}
}
