#include "main.h"

/**
 * print_number - prints an int
 * @n: int
 */
void print_number(int n)
{
	int digit = 0;
	int temp = n;
	unsigned int div = 1;
	int i;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (temp != 0)
	{
		temp /= 10;
		digit++;
	}
	for (i = 1; i < digit; i++)
	{
		div *= 10;
	}
	while (div != 0)
	{
		num = n / div;
		_putchar('0' + num);
		n %= div;
		div /= 10;

		if (num == 0 && n == 0)
		{
			break;
		}
	}
}
