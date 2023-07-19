#include "function_pointers.h"

/**
* main - entry point
* @argc: nb of arguments
* @argv: array
* Return: Always O
*/
int main(int argc, char *argv[])
{
	int bytes;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx ", *((char *) main + i));
	}

	printf("\n");
	return (0);
}
