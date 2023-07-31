#include "lists.h"

/**
* list_len - return nb of elts in a linked list_t list
* @h: pointer to first node
* Return: nb of elts
*/
size_t list_len(const list_t *h)
{
	size_t countNodes = 0;
	const list_t *activeNode = h;

	while (activeNode != NULL)
	{
		countNodes++;
		activeNode = activeNode->next;
	}
	return (countNodes);
}
