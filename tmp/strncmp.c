#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	i = 6;
	printf("strncmp[1]: %d\n", strncmp("abahause", "abahause", 8));
	printf("strncmp[2]: %d\n", strncmp("abahause", "abahause", 30));
	printf("strncmp[3]: %d\n", strncmp("abahause", "ABAHAUSE", 8));
	printf("strncmp[4]: %d\n", strncmp("abahause", "aBaHAUSE", 8));
	printf("strncmp[5]: %d\n", strncmp("abahause", "", 8));
	printf("strncmp[6]: %d\n", strncmp("abahause", "", 0));
	printf("strncmp[%d]: %d\n", ++i, strncmp(NULL, NULL, 0));
	printf("strncmp[%d]: %d\n", ++i, strncmp(NULL, NULL, 3));
	printf("strncmp[%d]: %d\n", i, strncmp(NULL, "", 3));
	printf("strncmp[%d]: %d\n", i, strncmp("abahause", NULL, 3));
	return (0);
}