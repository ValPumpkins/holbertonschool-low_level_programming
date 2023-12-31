#include "hash_tables.h"

/**
* hash_table_set - adds an element to the hash table
* @ht: hash table
* @key: key
* @value: value
* Return: 1 if success, 0 of failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newNode, *currentNode;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = hash_djb2((const unsigned char *)key) % ht->size;
	if (ht->array == NULL)
		return (0);

	currentNode = ht->array[index];
	while (currentNode != NULL)
	{
		if (strcmp(currentNode->key, key) == 0)
		{
			free(currentNode->value);
			currentNode->value = strdup(value);
			return (1);
		}
		currentNode = currentNode->next;
	}
	newNode = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);
	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->value = strdup(value);
	if (newNode->value == NULL)
	{
		free(newNode->key);
		free(newNode);
		return (0);
	}
	newNode->next = ht->array[index];
	ht->array[index] = newNode;
	return (1);
}
