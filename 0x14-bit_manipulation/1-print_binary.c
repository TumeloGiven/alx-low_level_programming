#include "main.h"

/**
 * print_binary - Function prints the binary equivalent of a decimal number
 * @n: The number to print in binary
 */
void print_binary(unsigned long int n)
{
	int x, count = 0;
	unsigned long int temp;

	for (x = 63; x >= 0; x--)
	{
		temp = n >> x;

		if (temp & 1)
		{
			count++;
			_putchar('1');
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
