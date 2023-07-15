#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
int x;
char lc;

for (x = 0; x <= 9; x++)
putchar(x);

for (lc = 'a'; lc <= 'f'; lc++)
putchar(lc);
putchar('\n');

return (0);
}
