/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:12:24 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/27 18:32:58 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char *str);

int	ft_atoi(const char *str)
{
	size_t		chr_num;
	int			flag;
	long long	result;

	chr_num = ft_isspace(str);
	flag = 1;
	result = 0;
	if (str[chr_num] == '+' || str[chr_num] == '-')
	{
		flag = ',' - str[chr_num];
		chr_num++;
	}
	while (ft_isdigit(str[chr_num]))
	{
		if (result > (LLONG_MAX - (str[chr_num] - '0')) / 10)
		{
			if (flag == -1)
				return ((int)(LLONG_MIN));
			return ((int)(LLONG_MAX));
		}
		result = result * 10 + (str[chr_num] - '0');
		chr_num++;
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
