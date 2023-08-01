#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at a given position
* @h: pointer to pointer to first node
* @idx: index where to add new node
* @n: value to add to new node
* Return: adress of new node or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *tempNode;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	tempNode = *h;
	while (tempNode != NULL && count < idx - 1)
	{
		tempNode = tempNode->next;
		count++;
	}
	if (tempNode == NULL || count < idx - 1)
		return (NULL);

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = tempNode;
	newNode->next = tempNode->next;

	if (tempNode->next != NULL)
		tempNode->next->prev = newNode;

	tempNode->next = newNode;
	return (newNode);
}
