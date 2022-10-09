/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:12:24 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/09 18:16:48 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isspace(const char *str);

int	ft_atoi(const char *str)
{
	int		chr_num;
	int		flag;
	int		digit;

	chr_num = ft_isspace(str);
	flag = 1;
	digit = 0;
	if (str[chr_num] == '+' || str[chr_num] == '-')
	{
		flag = ',' - str[chr_num];
		chr_num++;
	}
	while (str[chr_num] != '\0' && ft_isdigit(str[chr_num]) == 1)
	{
		digit = digit * 10 + (str[chr_num] - '0');
		chr_num++;
	}
	return (digit * flag);
}

int	ft_isspace(const char *str)	// static ??
{
	int	i;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || \
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	return (i);
}
