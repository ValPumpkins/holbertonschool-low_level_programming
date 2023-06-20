#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @num: number
 * Return: always 0
 */
int print_last_digit(int num)
{
	int last;

	last = num % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
