#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: pointer to number
* @index: index of the wanted bit
* Return: 1 if success / -1 if error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits = sizeof(unsigned long int) * 8;
	unsigned long int mask;

	mask = ~(1UL << index);

	if (index >= bits)
		return (-1);

	*n &= mask;

	return (1);
}
