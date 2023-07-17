#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>
#include <stdlib.h>

/**
* print_name - prints a name
*/
void print_name(char *name, void (*f)(char *));

#endif
