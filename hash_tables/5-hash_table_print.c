#include "hash_tables.h"

/**
* hash_table_print - prints a hash table
* @ht: hash table
* Return: always O
*/
void hash_table_print(const hash_table_t *ht)
{
	int printed = 0;
	unsigned long int i;
	hash_node_t *currentNode;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		currentNode = ht->array[i];
		while (currentNode != NULL)
		{
			if (printed)
				printf(", ");

			printf("'%s': '%s'", currentNode->key, currentNode->value);
			printed = 1;
			currentNode = currentNode->next;
		}
	}
	printf("}\n");
}
