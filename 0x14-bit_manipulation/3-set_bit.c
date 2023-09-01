#include "main.h"

/**
 * set_bit - Function Sets a bit at an
 * index to 1
 * @n: The pointer to the number to change
 * @index: index of the bit on success
 *
 * Return: 1 (success), -1 (failure)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
