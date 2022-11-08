#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	main(void)
{
	printf("atoi[1] : %d\n", atoi("132--"));
	printf("atoi[2] : %d\n", atoi("+132--"));
	printf("atoi[3] : %d\n", atoi("-132--"));
	printf("atoi[4] : %d\n", atoi("-   132--"));
	printf("atoi[5] : %d\n", atoi("       +13k2--"));
	//printf("atoi[NULL		  ] : %d\n", atoi(NULL));	// segmentation fault
	printf("atoi[LLONG_MAX]     : %d\n", atoi("9223372036854775807"));
	printf("atoi[LLONG_MAX + 1] : %d\n", atoi("9223372036854775808"));
	printf("atoi[LLONG_MIN]     : %d\n", atoi("-9223372036854775808"));
	printf("atoi[LLONG_MIN - 1] : %d\n", atoi("-9223372036854775809"));
	printf("atoi[LLONG_MIN + 1] : %d\n", atoi("-9223372036854775807"));
	printf("atoi[INT_MIN]       : %d\n", atoi("-2147483648"));
	printf("atoi[INT_MIN - 1]   : %d\n", atoi("-2147483649"));
	printf("atoi[INT_MAX]       : %d\n", atoi("2147483647"));
	printf("atoi[INT_MAX + 1]   : %d\n", atoi("2147483648"));
	return (0);
}
