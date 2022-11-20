/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.ja>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:20:38 by ttachi            #+#    #+#             */
/*   Updated: 2022/11/19 21:43:50 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str = electric_alloc(10);
	char	*buff = electric_alloc(10);
	strcpy(buff, "AB");
	strcpy(str, "CDEFGHI");
	strlcat(buff, str, 10);
	printf("strlcat後: %s\n", buff);

	char	src[256] = "experience";
	char	dest[256] = "gold";

	printf("strlcat前: %s\n", dest);
	strlcat("cdefghi", "ab", 10);
	 strlcat(dest, src, 20);	// result: Success
	 strlcat(dest, src, 10);		// result: Halfway
	 strlcat(NULL, src, 20); // expect: segmentation fault
	// strlcat(dest, NULL, 20); // expect: segmentation fault
	// strlcat(dest, src, 0); // expect: goldと出力
	// strlcat(NULL, NULL, 20); // expect: segmentation fault
	// strlcat(NULL, src, 0); // expect: goldと出力
	// strlcat(NULL, src, 1); // expect: segmentation fault
	// strlcat(NULL, src, 6); // expect: segmentation fault
	// strlcat(dest, NULL, 0); // expect: segmentation fault
	// strlcpy(NULL, NULL, 0); // expect: segmentation fault
	printf("strlcat : %zu\n", strlcat(dest, src, 0));
	printf("strlcat後: %s\n", dest);
	printf("strlcat : %zu\n", strlcat(dest, src, 3));
	printf("strlcat後: %s\n", dest);
	return (0);
}