#include "lists.h"

/**
* delete_dnodeint_at_index - deletes node at index of a dlistint_t linked list
* @head: pointer to pointer to first node
* @index: index of node to be deleted
* Return: success = 1, failed = -1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tempNode, *prevNode;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	tempNode = *head;

	if (index == 0)
	{
		*head = tempNode->next;

		if (tempNode->next != NULL)
			tempNode->next->prev = NULL;

		free(tempNode);
		return (1);
	}

	while (tempNode != NULL && count < index)
	{
		prevNode = tempNode;
		tempNode = tempNode->next;
		count++;
	}

	if (tempNode == NULL)
		return (-1);

	prevNode->next = tempNode->next;

	if (tempNode->next != NULL)
		tempNode->next->prev = prevNode;

	free(tempNode);
	return (1);
}
