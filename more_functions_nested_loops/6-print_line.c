#include "main.h"

/**
 * print_line - draw a straight line
 * @n: number of times the character _ should be printed
 * Return: Always 0
 */
void print_line(int n)
{
	int line = n;

	for (line = n; line > 0; line--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
