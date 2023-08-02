#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index
* @n: pointeur to number
* @index: index of wanted bit
* Return: 1 if success / -1 if error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits = sizeof(unsigned long int) * 8;
	unsigned long int mask;

	mask = 1UL << index;

	if (index >= bits)
		return (-1);

	*n |= mask;

	return (1);
}
