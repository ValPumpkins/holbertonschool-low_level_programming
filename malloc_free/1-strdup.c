#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated spaces
 * @str: string
 * Return: pointer to a new string which is a duplicate of the string str
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len] != '\0'; len++)
	{
	}
	duplicate = malloc(len + sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		duplicate[i] = str[i];
	}
	return (duplicate);
}
