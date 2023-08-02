#include "main.h"

/**
* flip_bits - returns nb of bits needed to flip to get from one nb to another
* @n: nb 1 to compare
* @m: nb 2 to compare
* Return: nb of différent bits in n & m
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int comparaison;
	unsigned int count = 0;

	comparaison = n ^ m;

	while (comparaison)
	{
		count += comparaison & 1;
		comparaison >>= 1;
	}

	return (count);
}
