#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all single digit of base 10 without variable type char
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 0;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');
	}
	putchar('\n');
	return (0);
}

