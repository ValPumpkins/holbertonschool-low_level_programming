#include "variadic_functions.h"

/**
* print_numbers - prints numbers
* @n: number of integers
* @separator: string to be printed between numbers
* Return: always O
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(num);

	printf("\n");
}
