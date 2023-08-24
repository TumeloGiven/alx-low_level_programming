#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adding a new node at the beginning of a list
 * @head: a double pointer to the list_t list
 * @str: a new string to add in the node
 *
 * Return: address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
        list_t *new;
        unsigned int size = 0;

        while (str[size])
                size++;

        new = malloc(sizeof(list_t));
        if (!new)
                return (NULL);

        new->str = strdup(str);
        new->len = size;
        new->next = (*head);
        (*head) = new;

        return (*head);
}
