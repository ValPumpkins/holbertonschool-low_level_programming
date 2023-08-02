#include "main.h"

/**
* print_binary - prints the binary representation of a number
* @n: nb to print in binary
*
*/
void print_binary(unsigned long int n)
{
	int i, bites = 0;
	unsigned long int temp = n, bitValue;

	while (temp >>= 1)
		bites++;

	for (i = bites; i >= 0; i--)
	{
		bitValue = (n >> i) & 1;

		if (bitValue == 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
