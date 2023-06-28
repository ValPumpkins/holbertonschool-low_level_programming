#ifndef MAIN_H
#define MAIN_H

/**
 * int _putchar(char c) - print caracter
 */

int _putchar(char c);

/**
 * void reset_to_98(int *n) - update the value to 98
 */

void reset_to_98(int *n);

/**
 * void swap_int(int *a, int *b) - swaps the values of 2 integers
 */

void swap_int(int *a, int *b);

/**
 * int _strlen(char *s) - return the length of a string
 */

int _strlen(char *s);

/**
 * void _puts(char *str) - prints a string
 */

void _puts(char *str);

/**
 * void print_rev(char *s) - prints a string in reverse
 */

void print_rev(char *s);

/**
 * void rev_string(char *s) - reverses a string
 */

void rev_string(char *s);

/**
 * void puts2(char *str) - prints every other character of a string, starting with the first character
 */

void puts2(char *str);

/**
 * void puts_half(char *str) - prints half of a string
 */

void puts_half(char *str);

/**
 * void print_array(int *a, int n) - prints n elements of an array of int
 */

void print_array(int *a, int n);

/**
 * char *_strcpy(char *dest, char *src) - copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest
 */

char *_strcpy(char *dest, char *src);

/**
 * int _atoi(char *s) - convert a string to an int
 */

int _atoi(char *s);

/**
 * char *_strcat(char *dest, char *src) - concatenates 2 strings
 */

char *_strcat(char *dest, char *src);

/**
 * char *_strncat(char *dest, char *src, int n) - concatenates 2 strings
 */

char *_strncat(char *dest, char *src, int n);

/**
 * char *_strncpy(char *dest, char *src, int n) - copies a string
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * int _strcmp(char *s1, char *s2) - compares 2 strings
 */

int _strcmp(char *s1, char *s2);

/**
 * void reverse_array(int *a, int n) - reverse
 */

void reverse_array(int *a, int n);

/**
 * char *string_toupper(char *) - changes all lowercase letters of a string to uppercase
 */

char *string_toupper(char *);

/**
 * char *cap_string(char *) - capitalises all words of a string
 */

char *cap_string(char *);

/**
 * char *leet(char *) - encode a string into 1337
 */

char *leet(char *);


#endif
