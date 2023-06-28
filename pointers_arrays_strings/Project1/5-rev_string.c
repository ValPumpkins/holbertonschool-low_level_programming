#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: Always 0
 */
void rev_string(char *s)
{
	char temp = s[0];
	int len = 0;
	int i = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		len--;
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
	}
}
