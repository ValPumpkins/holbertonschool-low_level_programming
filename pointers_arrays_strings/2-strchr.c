#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: char to locate
 * Return: pointer to char in s if c is found & NULL is c is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
