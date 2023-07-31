#include "lists.h"

/**
* add_dnodeint - adds a new node at the beginning of a dlistint_t list
* @head: pointer to pointer to first node
* @n: value to add to new node
* Return: address of new elt or NULL if it faileds
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head != NULL)
		(*head)->prev = newNode;

	*head = newNode;

	return (newNode);
}
