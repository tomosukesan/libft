/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:51:05 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/14 22:56:12 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static
char	*conv_to_text(int minus_flag, int digit, long long tmp, char *result);

char	*ft_itoa(int n)
{
	int			minus_flag;
	int			digit;
	long long	tmp;
	char		*result;

	minus_flag = 0;
	digit = 0;
	tmp = (long long)n;
	if (n < 0)
	{
		minus_flag++;
		tmp *= -1;
	}
	n /= 10;
	while (n)
	{
		digit++;
		n /= 10;
	}
	result = malloc(sizeof(char) * (digit + minus_flag + 1));
	if (result == NULL)
		return (NULL);
	return (conv_to_text(minus_flag, digit, tmp, result));
}

char	*conv_to_text(int minus_flag, int digit, long long tmp, char *result)
{
// static
	result[digit + minus_flag] = '\0';
	while (0 <= digit + minus_flag)
	{
		result[digit + minus_flag] = tmp % 10 + '0';
		tmp /= 10;
		digit--;
	}
	if (minus_flag)
		result[0] = '-';
	return (result);
}
