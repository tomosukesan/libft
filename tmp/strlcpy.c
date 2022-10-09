/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:36:14 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/09 10:36:53 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	char	src[256] = "0123456789";
	char	dest[256];

	printf("strlcpy[1]:%zu\n", strlcpy(dest, src, 10));
	printf("strlcpy[2]:%zu\n", strlcpy(dest, src, 5));
	printf("strlcpy[3]:%zu\n", strlcpy(dest, src, 0));
	printf("strlcpy[4]:%zu\n", strlcpy(NULL, src, 0));
	write(1, src, 11);
	src[5] = '\0';
	// strlcpy(NULL, src, 11); // expect: segmentation fault
	// strlcpy(dest, NULL, 11); // expect: segmentation fault
	// strlcpy(dest, src, 0); // expect: nothing
	// strlcpy(NULL, NULL, 11); // expect: segmentation fault
	// strlcpy(NULL, src, 0); // expect: nothing
	// strlcpy(dest, NULL, 0); // expect: segmentation fault
	strlcpy(NULL, NULL, 0); // expect: segmentation fault
	puts("");
	//  write(1, dest, 11);
	return (0);
}
