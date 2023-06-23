#include <stdio.h>

/**
 * main - entry
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long nb1 = 1;
	unsigned long nb2 = 2;
	unsigned long sum;
	unsigned long pairsum;

	while (nb1 <= 4000000)
	{
		if (nb1 % 2 == 0)
		{
			pairsum = pairsum + nb1;
		}
		sum = nb1 + nb2;
		nb1 = nb2;
		nb2 = sum;

	}
	printf("%ld\n", pairsum);
	return (0);
}

