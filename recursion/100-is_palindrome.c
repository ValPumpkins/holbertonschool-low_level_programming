#include "main.h"

/**
 * _strlen- check length of *s
 * @s: string
 * Return: length of *s
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(s + 1));
	}
}
/**
 * check_palindrome - checker if *s is a palindrome
 * @s: string
 * @start: beg of the string
 * @end: end of the string
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (check_palindrome(s, start + 1, end - 1));
}
/**
 * is_palindrome - palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	return (check_palindrome(s, 0, length - 1));
}
