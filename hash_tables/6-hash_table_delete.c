#include "hash_tables.h"

/**
* hash_table_delete - deletes a hash table
* @ht: hash table
* Return: always 0
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *currentNode, *nextNode;

	if (ht == NULL)
		return;

	if (ht->array == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		currentNode = ht->array[i];
		while (currentNode != NULL)
		{
			nextNode = currentNode->next;
			free(currentNode->key);
			free(currentNode->value);
			free(currentNode);
			currentNode = nextNode;
		}
	}
	free(ht->array);
	free(ht);
}
