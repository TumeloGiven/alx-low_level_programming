#include "lists.h"

/**
 * sum_listint - calculate the sum of all the data in a list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int results = 0;
	listint_t *node = head;

	while (node)
	{
		results += node->n;
		node = node->next;
	}

	return (results);
}
