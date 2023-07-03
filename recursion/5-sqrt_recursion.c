#include "main.h"

/**
 * helpsquare - auxiliary function for _sqrt_recursion to find the square root
 * @i: squared number to check
 * @square: n to check
 * Return: natural square root of n
 */
int helpsquare(int i, int square)
{
	if (i * i == square)
	{
		return (i);
	}
	if (i * i > square)
	{
		return (-1);
	}
	return (helpsquare(i + 1, square));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to check for natural square root
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	return (helpsquare(1, n));
}
