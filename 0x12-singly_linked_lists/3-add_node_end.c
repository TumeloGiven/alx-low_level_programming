#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Function adds a new node at the end of a linked list
 * @head: The double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *_temp = *head;
	unsigned int size = 0;

	while (str[size])
		size++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = size;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (_temp->next)
		_temp = _temp->next;

	_temp->next = new;

	return (new);
}
