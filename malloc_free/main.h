#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes the character c to stdout
 */

int _putchar(char c);

/**
 * char *create_array(unsigned int size, char c) - create an array of chars and initializes it with a specific char
 */

char *create_array(unsigned int size, char c);

/**
 * char *_strdup(char *str) - returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter
 */

char *_strdup(char *str);

/**
 * char *str_concat(char *s1, char *s2) - concatenates two strings
 */

char *str_concat(char *s1, char *s2);

/**
 * int **alloc_grid(int width, int height) - returns a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height);


#endif
