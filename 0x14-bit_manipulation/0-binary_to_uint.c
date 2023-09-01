#include "main.h"

/**
 * binary_to_uint - Function converts a binary number to unsigned int
 * @b: string contains the binary number
 *
 * Return: returns the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int uns_int = 0;

	if (!b)
		return (0);

	for (count = 0; b[count]; count++)
	{
		if (b[count] < '0' || b[count] > '1')
			return (0);
		uns_int = 2 * uns_int + (b[count] - '0');
	}

	return (uns_int);
}
