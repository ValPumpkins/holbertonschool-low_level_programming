#include <stdio.h>

/**
 * main - print the nb of arguments passed into it
 * @argc: argv array lenght
 * @argv: array
 * Return: 0 Sucess
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
