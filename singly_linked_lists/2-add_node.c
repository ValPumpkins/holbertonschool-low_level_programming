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
* add_node - adds a new node at the beginning of alist_t list
* @head: pointer to pointer to first node
* @str: string to be duplicated
* Return: adress of the new elt or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (str == NULL)
		return (NULL);

	newNode = (list_t *)malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = _strlen(newNode->str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
