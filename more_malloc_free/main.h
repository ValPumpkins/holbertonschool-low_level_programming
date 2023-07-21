#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

/**
 * _putchar - writes the character c to stdout
 */

int _putchar(char c);

/**
 * void *malloc_checked(unsigned int b) - allocates memory using malloc
 */

void *malloc_checked(unsigned int b);

/**
 * char *string_nconcat(char *s1, char *s2, unsigned int n) - concatenates 2 strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * void *_calloc(unsigned int nmemb, unsigned int size) - allocates memory for an array using malloc
 */

void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * int *array_range(int min, int max) - creates an array of integers
 *
 */

int *array_range(int min, int max);

/**
* realloc - reallocates a memory block using malloc and free
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

char *_memcpy(char *dest, char *src, unsigned int n);

#endif
