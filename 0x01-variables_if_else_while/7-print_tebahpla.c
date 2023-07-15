#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
char lc;

for (lc = 'z'; lc >= 'a'; lc--)
	putchar(lc);
putchar('\n');

return (0);
}
