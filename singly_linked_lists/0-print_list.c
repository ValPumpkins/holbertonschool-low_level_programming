#include "lists.h"

/**
* print_list - prints all the elts of a list_t list
* @h: pointer to first node
* Return: nb of nodes
*/
size_t print_list(const list_t *h)
{
	size_t nbNodes;

	for (nbNodes = 0; h != NULL; h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		nbNodes++;
	}
	return (nbNodes);

}
