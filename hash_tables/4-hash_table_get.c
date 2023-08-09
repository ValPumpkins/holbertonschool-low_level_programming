#include "hash_tables.h"

/**
* hash_table_get - retrieves a value associated with a key
* @ht: hash table
* @key: key
* Return: value associated with the element or NULLif key couldn't be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *currentNode;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = hash_djb2((unsigned char *)key) % ht->size;
	currentNode = ht->array[index];

	while (currentNode != NULL)
	{
		if (strcmp(currentNode->key, key) == 0)
			return (currentNode->value);
		currentNode = currentNode->next;
	}
	return (NULL);
}
