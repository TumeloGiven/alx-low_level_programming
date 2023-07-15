#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	char lowc, e, q;

	e = 'e';
	q = 'q';

	for (lowc = 'a'; lowc <= 'z'; lowc++)
	{
		if (lowc != e && lowc != q)
		putchar(lowc);
	}
	putchar('\n');

	return (0);
}
