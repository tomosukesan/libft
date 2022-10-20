#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	dest[256];
	char	src[256] = "42tokyo";
	// printf("memcpy[1]: %s\n", memcpy(dest, src, 3));
	// printf("memcpy[2]: %s\n", memcpy(dest, src, 0));
	// // printf("memcpy[3]: %s\n", memcpy("24", NULL, 2));	// segmentation fault
	// printf("memcpy[3]: %s\n", memcpy("24", NULL, 0));	// 24
	// printf("memcpy[4]: %s\n", memcpy(NULL, src, 0));	// (null)
	printf("memcpy[5]: %s\n", memcpy(NULL, NULL, 10));	// (null)
	// // printf("memcpy[6]: %s\n", memcpy("", src, 3));	// segmentation fault
	// printf("memcpy[7]: %s\n", memcpy(dest, "", 3));	// 未表示
	// printf("%s\n", memcpy("abc", "abcd", 3));
	printf("memcpy[8]: %s\n", memcpy("", "a", 0));	// 未表示
	printf("memcpy[8]: %s\n", memcpy("", "", 4));	// 未表示
	printf("memcpy[9]: %s\n", memcpy("", "", 0));	// 未表示
	printf("memcpy[10]:%s\n", memcpy("", src, 0));	// 未表示
	printf("memcpy[]: %s\n", memcpy(NULL, src, 3));	// segmentation fault
	printf("memcpy[]: %s\n", memcpy(dest, NULL, 3));	// segmentation fault
	return (0);
}
