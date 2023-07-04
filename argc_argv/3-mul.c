#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it reveives
 * @argc: argv array
 * @argv: array
 * Return: 0 Sucess
 */
int main(int argc, char *argv[])
{
	int multi;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	multi = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", multi);
	return (0);
}
