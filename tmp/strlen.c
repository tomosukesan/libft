/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:11:47 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/08 16:15:22 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[256] = "42tokyo";
	// char	str2[256] = NULL;

	printf("%lu\n", strlen(str1));
	printf("%lu\n", strlen(NULL));
	return (0);
}