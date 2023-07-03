#include "main.h"

/**
 * help_prime - check for prime nb
 * @num: number
 * @i: index
 * Return: prime nb
 */
int help_prime(int num, int i)
{
	if (num < 2)
	{
		return (0);
	}
	if (i * i > num)
	{
		return (1);
	}
	if (num % i == 0)
	{
		return (0);
	}
	return (help_prime(num, i + 1));
}
/**
 * is_prime_number - returns 1 if the int is a prime number, otherwise return 0
 * @n: number to check
 * Return: 1 if n is a prime number, if not 0
 */
int is_prime_number(int n)
{
	return (help_prime(n, 2));
}
