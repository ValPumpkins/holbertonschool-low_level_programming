#include "lists.h"

/**
* free_dlistint - frees a dlistint_t list
* @head: pointer to first node
*
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *currentNode;

	while (head != NULL)
	{
		currentNode = head;
		head = head->next;
		free(currentNode);
	}
}
