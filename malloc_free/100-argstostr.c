#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer
 * Return: length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * argstostr - concactenates the arguments of your programm
 * @ac: arg count
 * @av: pointter to arg count
 * Return: pointer to new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int arglen = 0;
	int i, j;
	char *result;
	int count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		arglen += _strlen(av[i]) + 1;
	}
		result = malloc((arglen + 1) * sizeof(char));
		if (result == NULL)
			return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[count++] = av[i][j];
		}
		result[count++] = '\n';
	}
	result[count] = '\0';
	return (result);
}
