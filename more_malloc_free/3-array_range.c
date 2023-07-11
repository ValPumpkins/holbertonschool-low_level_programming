#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of int
 * @min: value mini
 * @max: value max
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int sizeArray;
	int i;

	if (min > max)
		return (NULL);
	sizeArray = max - min + 1;
	array = malloc(sizeArray * sizeof(int));

	if (array == NULL)
		return (NULL);
	for (i = 0; i < sizeArray; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
