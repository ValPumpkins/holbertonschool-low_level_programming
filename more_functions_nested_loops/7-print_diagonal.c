#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: number of times the character \ should be printed
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int row, space;

	if (n > 0)
	{
		for (row = 0; row < n; row++)
		{
			for (space = 0; space < row; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
