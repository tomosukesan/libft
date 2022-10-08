/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.ja>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 06:23:54 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/08 08:47:04 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char str[256];

	strcpy(str, "0123456789");
	printf("ft_isalpha: %d\n", ft_isalpha(66));
	printf("ft_isdigit: %d\n", ft_isdigit(51));
	printf("ft_isalnum: %d\n", ft_isalnum(108));
	printf("ft_isascii: %d\n", ft_isascii(100));
	printf("ft_isprint: %d\n", ft_isprint(12));
	printf("ft_strlen:  %zu\n", ft_strlen("Tachi Tomonori"));
	// printf("ft_strlen:  %zu\n", ft_strlen(NULL));
	printf("ft_memset: 実行前> %s\n", str);
	ft_memset(str + 2, '*', 5);
	printf("ft_memset: 実行後> %s\n", str);
	return (0);
}
