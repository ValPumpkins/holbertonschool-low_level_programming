#include "lists.h"

/**
* print_dlistint - prints all the elements of a dlistint_t list
* @h: pointer to first node
* Return: nb of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *currentNode = h;
	size_t countNode = 0;

	while (currentNode != NULL)
	{
		printf("%d\n", currentNode->n);
		currentNode = currentNode->next;
		countNode++;
	}
	return (countNode);
}
