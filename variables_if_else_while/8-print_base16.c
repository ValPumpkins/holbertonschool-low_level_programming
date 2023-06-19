#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all single digit of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');
	}
	for (digit = 'a'; digit < 'g'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
