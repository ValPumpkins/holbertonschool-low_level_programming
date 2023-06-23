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
	unsigned long loop;

	printf("%ld, %ld, ", nb1, nb2);
	for (loop = 3; loop <= 50; loop++)
	{
		sum = nb1 + nb2;
		printf("%ld", sum);
		if (loop != 50)
		{
			printf(", ");
		}
		nb1 = nb2;
		nb2 = sum;
	}
	printf("\n");
	return (0);
}

