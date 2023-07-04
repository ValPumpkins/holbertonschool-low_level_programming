#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to searchi
 * @needle: substring to be located
 * Return: If sub is located, pointer to beg of located sub, if not NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		int temp = i;

		for (j = 0; needle[j]; j++)
		{
			if (haystack[temp] != needle[j])
			{
				break;
			}
			else
			{
				temp++;
			}
		}
		if (!needle[j])
		{
			return (&haystack[i]);
		}
	}
	return ('\0');
}
