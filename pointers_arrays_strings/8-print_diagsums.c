#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of 2 diagonals
 * @a: pointer
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[(i + 1) * size - (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
