#include "function_pointers.h"

/**
* array_iterator - executes a function as a parameter in each elet of array
* @array: array of int
* @size: size of the array
* @action: pointer to the function needed
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
