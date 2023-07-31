#include "lists.h"

/**
* free_list - frees a list_t list
* @head: pointer to first node
* Return: Always 0
*/
void free_list(list_t *head)
{
	list_t *actualNod, *nextNode;

	actualNod = head;

	while (actualNod != NULL)
	{
		nextNode = actualNod->next;
		free(actualNod->str);
		free(actualNod);
		actualNod = nextNode;
	}
}
