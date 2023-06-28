#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: capitalized string
 */
char *leet(char *s)
{
	int i, j;
	char letter[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letter[j])
			{
				s[i] = leet[j];
				break;

			}
		}
	}
	return (s);
}
