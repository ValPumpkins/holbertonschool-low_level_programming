#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointer to a string of 0 & 1 chars
* Return: converted nb or 0 if b = NULL & if chars in
*	b that are not 0 & 1
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int convertedNb = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
	convertedNb = (convertedNb << 1) + (*b - '0');
	b++;
	}
	return (convertedNb);
}
