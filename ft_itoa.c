/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:51:05 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/21 19:14:20 by ttachi           ###   ########.fr       */
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
	digit = 1;
	tmp = (long long)n;
	if (n < 0)
	{
		minus_flag++;
		tmp *= -1;
	}
	while (n <= -10 || n >= 10)
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
// static : prototypeも
	result[digit + minus_flag] = '\0';
	if (tmp < 10)
		result[digit + minus_flag - 1] = tmp + '0';
	else
	{
		while (minus_flag <= digit)
		{
			result[digit + minus_flag - 1] = tmp % 10 + '0';
			tmp /= 10;
			digit--;
		}
	}
	if (minus_flag)
		result[0] = '-';
	return (result);
}
