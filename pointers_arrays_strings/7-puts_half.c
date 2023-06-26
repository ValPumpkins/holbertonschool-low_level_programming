#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: Always 0
 */
void puts_half(char *str)
{
	int len = 0;
	int i;
	int half;

	while (str[len] != '\0')
	{
		len++;
	}
	half = (len - 1) / 2 + 1;
	for (i = half; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

