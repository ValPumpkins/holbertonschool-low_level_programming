#include "variadic_functions.h"

/**
* print_char - if arg is a char
* @arg: arguments
*/
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
* print_int - if arg is a int
* @arg: arguments
*/
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
* print_float - if arg is a float
* @arg: arguments
*/
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
* print_str - if arg is a string
* @arg: arguments
*/
void print_str(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	va_list arg;
	unsigned int i = 0, j = 0;
	const char *separator = "";

	print_t f[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{'\0', NULL}
	};

	va_start(arg, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (f[j].symbol != '\0')
		{
			if (format[i] == f[j].symbol)
			{
				printf("%s", separator);
				f[j].print(arg);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
