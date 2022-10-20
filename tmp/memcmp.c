#include <stdio.h>


int	main(void)
{
	printf("memcmp[7] : %d\n", memcmp("", "", 10));
	printf("memcmp[7] : %d\n", memcmp(NULL, "", 10));		// segmentation fault
	// printf("memcmp[7] : %d\n", memcmp("", NULL, 10));	// segmentation fault
}