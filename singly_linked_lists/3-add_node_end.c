#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer
 * Return: length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: pointer to pointer to the first node
* @str: string to duplicate
* Return: adress of the new elt or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *actualNode;

	if (str == NULL)
		return (NULL);

	newNode = (list_t *)malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = _strlen(newNode->str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		actualNode = *head;
		while (actualNode->next != NULL)
		{
			actualNode = actualNode->next;
		}
		actualNode->next = newNode;
	}
	return (newNode);
}
