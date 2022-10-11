#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	printf("strdup: %s\n", strdup("42tokyo"));
	printf("strdup: %s\n", strdup(""));			// Nothing
	printf("strdup: %s\n", strdup(NULL));		// segmentation fault
}
