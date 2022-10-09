/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 06:23:54 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/09 17:09:28 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "unistd.h"
#include "libft.h"

void	test_ascii(void);
void	test_ft_memmove(void);
void	test_ft_strlcpy(void);
void	test_ft_strlcat(void);
void	test_ft_strncmp(void);
void	test_ft_memchr(void);
void	test_ft_memcmp(void);
void	test_ft_strnstr(void);
void	test_ft_atoi(void);

int	main(void)
{
	char	str[256];

	strcpy(str, "0123456789");
	test_ascii();
	printf("ft_strlen:  %zu\n", ft_strlen("Tachi Tomonori"));
	// printf("ft_strlen:  %zu\n", ft_strlen(NULL));
	printf("ft_memset: 実行前> %s\n", str);
	ft_memset(str + 2, '*', 5);
	printf("ft_memset: 実行後> %s\n", str);
	write(1, "ft_bzero:  実行後> ", 24);
	ft_bzero(str + 2, 5);
	write(1, str, 10);
	puts("");
	test_ft_memmove();
	test_ft_strlcpy();
	test_ft_strlcat();
	printf("ft_strchr:  %s\n", ft_strchr("42tokyo", (int)'o'));
	printf("ft_strrchr: %s\n", ft_strrchr("42tokyo", (int)'o'));
	test_ft_strncmp();
	test_ft_memchr();
	test_ft_memcmp();
	test_ft_strnstr();
	test_ft_atoi();
	return (0);
}

void	test_ascii(void)
{
	puts("===ascii=======");
	printf("ft_isalpha: %d\n", ft_isalpha(66));
	printf("ft_isdigit: %d\n", ft_isdigit(51));
	printf("ft_isalnum: %d\n", ft_isalnum(108));
	printf("ft_isascii: %d\n", ft_isascii(100));
	printf("ft_isprint: %d\n", ft_isprint(12));
	printf("ft_toupper: %c\n", ft_toupper(118));
	printf("ft_toupper: %c\n", ft_toupper(66));
	printf("ft_tolower: %c\n", ft_tolower(118));
	printf("ft_tolower: %c\n", ft_tolower(66));
	puts("===============");
}

void	test_ft_memmove(void)
{
	char	str[256];
	char	dest[256];

	strcpy(str, "0123456789");
	ft_memmove(dest, str, 10);
	printf("ft_memmove: %s\n", dest);
	ft_memmove(dest, str, 20);
	printf("ft_memmove: %s\n", dest);
}

void	test_ft_strlcpy(void)
{
	char	src[256] = "0123456789";
	char	dest[256];

	write(1, "===ft_strlcpy===\n", 18);
	write(1, src, 11);
	// src[5] = '\0';
	strlcpy(dest, src, 11);
	puts("");
	write(1, dest, 11);
	// ft_strlcpy(NULL, src, 11); // expect: segmentation fault
	// ft_strlcpy(dest, NULL, 11); // expect: segmentation fault
	// ft_strlcpy(dest, src, 0); // expect: nothing
	// ft_strlcpy(NULL, NULL, 11); // expect: segmentation fault
	// ft_strlcpy(NULL, src, 0); // expect: nothing
	// ft_strlcpy(dest, NULL, 0); // expect: segmentation fault
	// ft_strlcpy(NULL, NULL, 0); // expect: segmentation fault
	printf("\nft_strlcpy[1]:%zu\n", ft_strlcpy(dest, src, 10));
	printf("ft_strlcpy[2]:%zu\n", ft_strlcpy(dest, src, 5));
	printf("ft_strlcpy[3]:%zu\n", ft_strlcpy(dest, src, 0));
	printf("ft_strlcpy[4]:%zu\n", ft_strlcpy(NULL, src, 0));
	puts("===============");
	// write(1, dest, 11);
}

void	test_ft_strlcat(void)
{
	char	src[256] = " experience";
	char	dest[256] = "gold";

	printf("src確認:     %s\n", src);
	printf("ft_strlcat前: %s\n", dest);
	// ft_strlcat(dest, src, 20);	// result: Success
	// ft_strlcat(dest, src, 10);	// result: Halfway
	// ft_strlcat(NULL, src, 20);	// expect: segmentation fault
	// ft_strlcat(dest, NULL, 20);	// expect: segmentation fault
	// ft_strlcat(dest, src, 0);	// expect: goldと出力
	// ft_strlcat(NULL, NULL, 20);	// expect: segmentation fault
	ft_strlcat(NULL, src, 0);		// expect: goldと出力
	// ft_strlcat(NULL, src, 1);	// expect: segmentation fault
	// ft_strlcat(dest, NULL, 0);	// expect: segmentation fault
	// ft_strlcpy(NULL, NULL, 0);	// expect: segmentation fault
	printf("ft_strlcat後: %s\n", dest);
}

void	test_ft_strncmp(void)
{
	printf("ft_strncmp[1]: %d\n", ft_strncmp("abahause", "abahause", 8));
	printf("ft_strncmp[2]: %d\n", ft_strncmp("abahause", "abahause", 30));
	printf("ft_strncmp[3]: %d\n", ft_strncmp("abahause", "ABAHAUSE", 8));
	printf("ft_strncmp[4]: %d\n", ft_strncmp("abahause", "aBaHAUSE", 8));
	printf("ft_strncmp[5]: %d\n", ft_strncmp("abahause", "", 8));
	printf("ft_strncmp[6]: %d\n", ft_strncmp("abahause", "", 0));
	puts("===============");
}

void	test_ft_memchr(void)
{
	printf("ft_memchr[1] : %s\n", (char *)ft_memchr("abahause", (int)'h', 9));
	printf("ft_memchr[2] : %s\n", (char *)ft_memchr("abahause", (int)'h', 3));
	printf("ft_memchr[3] : %s\n", (char *)ft_memchr("abahause", (int)'\0', 1));
	printf("ft_memchr[4] : %s\n", (char *)ft_memchr("abahause", (int)'\0', 9));
	printf("ft_memchr[5] : %s\n", (char *)ft_memchr("abahause", (int)'h', 0));
	puts("===============");
}

void	test_ft_memcmp(void)
{
	printf("ft_memcmp[1] : %d\n", ft_memcmp("abahause", "abahause", 9));
	printf("ft_memcmp[2] : %d\n", ft_memcmp("abahause", "abahause", 200));
	printf("ft_memcmp[3] : %d\n", ft_memcmp("abahause", "aBahaUse", 1));
	printf("ft_memcmp[4] : %d\n", ft_memcmp("abahause", "ABAHAUSE", 9));
	printf("ft_memcmp[5] : %d\n", ft_memcmp("abahause", "", 9));
	printf("ft_memcmp[6] : %d\n", ft_memcmp("abahause", "aba", 0));
	puts("===============");
}

void	test_ft_strnstr(void)
{
	printf("ft_strnstr[1]:  %s\n", ft_strnstr("42tokyo", "kyo", 7));
	printf("ft_strnstr[2]:  %s\n", ft_strnstr("42tokyo", "kyo", 20));
	printf("ft_strnstr[3]:  %s\n", ft_strnstr("42tokyo", "kyo", 3));
	printf("ft_strnstr[4]:  %s\n", ft_strnstr("42tokyo", "kyo", 1));
	printf("ft_strnstr[5]:  %s\n", ft_strnstr("42tokyo", "kyo", 0));
	printf("ft_strnstr[6]:  %s\n", ft_strnstr("42tokyo", "", 5));
	printf("ft_strnstr[7]:  %s\n", ft_strnstr("", "aaa", 5));
	printf("ft_strnstr[8]:  %s\n", ft_strnstr("abbbcdefg", "bbc", 20));
	printf("ft_strnstr[9]:  %s\n", ft_strnstr(NULL, "is", 0));
	printf("ft_strnstr[10]: %s\n", ft_strnstr(NULL, "", 0));
	printf("ft_strnstr[11]:  %s\n", ft_strnstr("aaabcabcd", "cd", 8));	// null
	printf("ft_strnstr[12]:  %s\n", ft_strnstr("aaabcabcd", "aaabc", 5));
	// printf("ft_strnstr:  %s\n", ft_strnstr(NULL, NULL, 0));//segmentation fault
	// printf("ft_strnstr: %s\n", ft_strnstr("42tokyo", NULL, 5));//segmentation fault
	puts("===============");
}

void	test_ft_atoi(void)
{
	printf("ft_atoi[1] : %d\n", ft_atoi("132--"));
	printf("ft_atoi[2] : %d\n", ft_atoi("+132--"));
	printf("ft_atoi[3] : %d\n", ft_atoi("-132--"));
	printf("ft_atoi[4] : %d\n", ft_atoi("-   132--"));
	printf("ft_atoi[5] : %d\n", ft_atoi("       +13k2--"));
	puts("===============");
}
