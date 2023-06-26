#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: sring
 * Return: Always 0
 */
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	while (len > 0)
	{
		s--;
		len--;
		_putchar(*s);
	}
	_putchar('\n');
}
