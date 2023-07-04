#include <stdio.h>
#include <stdlib.h>

/**
 * main - multoplies 2 numbers
 * @argc: argv array
 * @argv: array
 * Return: 0 Success & 1 Error
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
