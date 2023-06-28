#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string
 * Return: Always 0
 */
void puts2(char *str)
{
	int nb = 0;

	while (str[nb] != '\0')
	{
		if (nb % 2 == 0)
		{
			_putchar(str[nb]);
		}
		nb++;
	}
	_putchar('\n');
}
