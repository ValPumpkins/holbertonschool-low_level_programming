#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: prefix
 * Return: nb of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int bytes = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				bytes += 1;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (bytes);
}
