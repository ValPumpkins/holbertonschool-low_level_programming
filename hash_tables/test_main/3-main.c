#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    int i;
    const char *strings[] = {
        "hetairas",
        "mentioner",
        "heliotropes",
        "neurospora",
        "depravement",
        "serafins",
        "stylist",
        "subgenera",
        "joyful",
        "synaphea",
        "redescribed",
        "urites",
        "dram",
        "vivency"
    };

    const int numStrings = sizeof(strings) / sizeof(strings[0]);
    const unsigned long int size = 10; // Hash table size

    for (i = 0; i < numStrings; i += 2)
    {
        unsigned long int hash1 = hash_djb2((const unsigned char *)strings[i]) % size;
        unsigned long int hash2 = hash_djb2((const unsigned char *)strings[i + 1]) % size;

        printf("'%s' collides with '%s'\n", strings[i], strings[i + 1]);
        printf("Hash 1: %lu, Hash 2: %lu\n", hash1, hash2);

        if (hash1 == hash2)
        {
            printf("Collision detected!\n");
        }
        printf("\n");
    }

    return 0;
}

