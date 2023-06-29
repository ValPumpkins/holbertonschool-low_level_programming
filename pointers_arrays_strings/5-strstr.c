#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: 
 * @needke: 
 * Return:
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
