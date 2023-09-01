#include "main.h"

/**
 * get_bit - Function returns the value of a bit at an index in a decimal number
 * @n: The number to search
 * @index: This is an index of the bit
 *
 * Return: Return the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
