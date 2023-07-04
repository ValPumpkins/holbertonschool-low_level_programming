#include <stdio.h>

/**
 * main - prints all arguments it reveives
 * @argc: argv array
 * @argv: array
 * Return: 0 Sucess
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
