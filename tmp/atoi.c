#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("atoi[1] : %d\n", atoi("132--"));
	printf("atoi[2] : %d\n", atoi("+132--"));
	printf("atoi[3] : %d\n", atoi("-132--"));
	printf("atoi[4] : %d\n", atoi("-   132--"));
	printf("atoi[5] : %d\n", atoi("       +13k2--"));
	return (0);
}
