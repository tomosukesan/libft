#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int		i;
	long	*pMem;
	
	pMem = (long *)calloc(100, sizeof(long));		// Nothing
	// pMem = (long *)calloc(0, sizeof(long));		// ��f���x�q�
	// pMem = (long *)calloc(100, 0);				// ��f���x�q�
	if (pMem == NULL)
		return (0);
	// for (i = 0; i < 100; i++)
	// 	pMem[i] = i;
	write(1, pMem, 100 * sizeof(long));
	free(pMem);
	return (0);
}