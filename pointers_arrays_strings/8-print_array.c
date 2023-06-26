#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of int
 *
 */
void print_array(int *a, int n)
{
	int nb;
	
	for (nb = 0; nb < n; nb++)
	{
		printf("%d", a[nb]);
		
		if (nb != n -1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
