#include "function_pointers.h"

/**
* int_index - array
* @array: array to search
* @size: array's size
* @cmp: pointer to function to compare
* Return: the index of first elt, if no match -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
