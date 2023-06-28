#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i = 0;
	int j;
	char spe[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[i] = s[i] - ('a' - 'A');
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (spe[j] == s[i - 1])
					{
						s[i] -= 'a' - 'A';
						break;
					}
				}
			}
		}
	}
	return (s);
}
