/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:11:22 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/14 20:07:04 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	devisor;
	long long	tmp;
	char		num;

	devisor = 1;
	tmp = (long long)n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		tmp *= -1;
	}
	n /= 10;
	while (n)
	{
		devisor *= 10;
		n /= 10;
	}
	while (devisor)
	{
		num = (char)(tmp / devisor);
		ft_putchar_fd(num + '0', fd);
		tmp -= num * devisor;
		devisor /= 10;
	}
}