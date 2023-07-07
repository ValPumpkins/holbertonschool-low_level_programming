#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints mini nb of coins to make change
 * @argc: array length
 * @argv: array
 * Return: minimum coins
 */
int main(int argc, char *argv[])
{
	int i;
	int money;
	int change = 0;
	int coins[6] = {25, 10, 5, 2, 1};

	if (argc < 2 || argv[1] == NULL)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);

	if (money < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		change  += money / coins[i];
		money %= coins[i];
	}
	printf("%d\n", change);
	return (0);
}
