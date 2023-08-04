#include "main.h"

/** programme test pour imprimer le résultat d'une XOR opération en binaire */
/** fonction pour calcul de XOR opération = n ^ m */
unsigned long int xor_operation(unsigned long int n, unsigned long int m)
{
    unsigned long int result;

	result = n ^ m;

	return (result);
}

/** fonction pour imprimer en binaire */
void print_binary(unsigned long int n)
{
	int i, bits = 0;
	unsigned long int temp = n, bitValue;

	while (temp >>= 1)
		bits++;

	for (i = bits; i >= 0; i--)
	{
		bitValue = (n >> i) & 1;

		if (bitValue == 1)
			putchar('1');
		else
			putchar('0');
	}
}
/** fonction pour donner le nb de bits différents */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int comparaison;
	unsigned int count = 0;

	comparaison = n ^ m;

	while (comparaison)
	{
		count += comparaison & 1;
		comparaison >>= 1;
	}

	return (count);
}

/** -------------------------------- */
int main(void)
{
    unsigned long int n = 555;
    unsigned long int m = 76;
	unsigned long int result;
	unsigned int count;

	printf("\n");

	printf("Number 1 (n) %lu in binary : ", n);
	print_binary(n);
	printf("\n");

	printf("Number 2 (m) %lu in binary : ", m);
	print_binary(m);
	printf("\n\n");

    result = xor_operation(n, m);
    printf("Result of XOR between %lu & %lu : ", n, m);
	print_binary(result);
	printf("\n");

	count = flip_bits(n, m);
	printf("Number of different bits between %lu & %lu : %u\n", n, m, count);
	printf("\n");

	return (0);
}
