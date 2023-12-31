#include "lists.h"

/**
* dlistint_len - returns the number of elements in a linked dlistint_t list
* @h: pointer to first node
* Return: nb of elts
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *currentNode = h;
	size_t countNode = 0;

	while (currentNode != NULL)
	{
		currentNode = currentNode->next;
		countNode++;
	}
	return (countNode);
}
