/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.ja>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:12:24 by ttachi            #+#    #+#             */
/*   Updated: 2022/11/07 19:50:14 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char *str);

int	ft_atoi(const char *str)
{
	size_t		index;
	int			flag;
	long long	result;

	index = ft_isspace(str);
	flag = 1;
	result = 0;
	if (str[index] == '+' || str[index] == '-')
	{
		flag = ',' - str[index];
		index++;
	}
	while (ft_isdigit(str[index]))
	{
		if (result > (LLONG_MAX - (str[index] - '0')) / 10)
		{
			if (flag == -1)
				return ((int)(LLONG_MIN));
			return ((int)(LLONG_MAX));
		}
		result = result * 10 + (str[index] - '0');
		index++;
	}
	return ((int)(result * flag));
}

static int	ft_isspace(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || \
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	return (i);
}
