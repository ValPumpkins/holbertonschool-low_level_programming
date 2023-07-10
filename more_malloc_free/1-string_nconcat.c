#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings
 * @n: nb of char in s2
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i, j;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	concat = malloc((len1 + n + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';
	return (concat);
}
