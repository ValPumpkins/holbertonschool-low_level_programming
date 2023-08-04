#include "main.h"

/**----------------------------------------*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int numBits, bitValue;

	numBits = sizeof(unsigned long int) * 8;

	if (index >= numBits)
		return (-1);

	bitValue = (n >> index) & 1;

	return (bitValue);
}

/**----------------------------------------*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits = sizeof(unsigned long int) * 8;
	unsigned long int mask;

	mask = 1UL << index;

	if (index >= bits)
		return (-1);

	*n |= mask;

	return (1);
}

/**----------------------------------------*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits = sizeof(unsigned long int) * 8;
	unsigned long int mask;

	mask = ~(1UL << index);

	if (index >= bits)
		return (-1);

	*n &= mask;

	return (1);
}

/**----------------------------------------*/
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
/**----------------------------------------*/
int main(void)
{
	unsigned long int n = 1024; // nb à modifier
	int setBit = 5; // index à modifier
	int clearBit = 10; // index à modifier
	unsigned long int n1temp;
	unsigned long int n2temp;
	int resultSetBit, resultClearBit;

	printf("\n");

	printf("For number n : %lu = in binary : ", n);
    print_binary(n);
    printf("\n\n");

	// Test de set_bit
	n1temp = n;
	resultSetBit = set_bit(&n1temp, setBit);
	printf("Binary nb after setting bit n° %d : ", setBit);
	print_binary(n1temp);
	printf("\n");

	printf("Decimal nb after setting bit n° %d : %lu\n", setBit, n1temp);
    printf("\n");

	// Test de clear_bit
	n2temp = n;
	resultClearBit = clear_bit(&n2temp, clearBit);
	printf("Binary nb after clearing bit n° %d : ", clearBit);
	print_binary(n2temp);
	printf("\n");

	printf("Decimal nb after clearing bit n° %d : %lu\n", clearBit, n2temp);
    printf("\n");

	return (0);
}
