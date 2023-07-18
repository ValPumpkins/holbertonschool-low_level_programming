#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct print - Struct to print
 * @symbol: List of types of arguments passed to func
 * @print: pointer to function used to print
 */
typedef struct print
{
	char symbol;
	void (*print)(va_list);
} print_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_str(va_list arg);


#endif
