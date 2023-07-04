#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argv array
 * @argv: array
 * Return: 0 Success & 1 Error
 */
int main(int argc, char *argv[])
{
	int i, j;
	int add = 0;
	int num;
	(void)argv;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);
		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}
		add += num;
	}
	printf("%d\n", add);
	return (0);
}
