#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - This function adds a new node at the beginning of a linked list
 * @head: This is a double pointer to the list_t list
 * @str: A string to add in the node
 *
 * Return: Address of the new element, or NULL if  fails
 */
list_t *add_node(list_t **head, const char *str)
{
        list_t *new;
        unsigned int i = 0;

        while (str[i])
                i++;

        new = malloc(sizeof(list_t));
        if (!new)
                return (NULL);

        new->str = strdup(str);
        new->len = i;
        new->next = (*head);
        (*head) = new;

        return (*head);
}
