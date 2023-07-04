#include "main.h"

/**
 * _atoi - convert a string to an int
 * @s: string to convert
 * Return: int converted
 */

int _atoi(char *s)
{
	unsigned int result = 0;
	int sign = 1;
	int digit;
	int digit_found = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s == '+')
		{
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';
			result = result * 10 + digit;
			digit_found = 1;
		}
		else if (digit_found)
		{
			break;
		}
	s++;
	}
	return (result * sign);
}
