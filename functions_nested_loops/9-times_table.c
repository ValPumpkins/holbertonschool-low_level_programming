#include "main.h"

/**
 * times_table - prints the 9 times tables
 * Return: always 0
 */
void times_table(void)
{
	int row, col;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			int p = (row * col);

			if (p > 9)
			{
				_putchar(p / 10 + '0');
			}
			else if (p <= 9 && col != 0)
			{
				_putchar(' ');
			}
			 _putchar(p % 10 + '0');
			if (col != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
