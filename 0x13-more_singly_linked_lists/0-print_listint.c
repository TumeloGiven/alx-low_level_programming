#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - printing all the elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t* h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return c;
}
