#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */

int main(void)
{
int n, _lastD;

srand(time(0));
n = rand() - RAND_MAX / 2;
_lastD = n % 10;

if (_lastD > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, _lastD);
}
else if (_lastD == 0)
{
printf("Last digit of %d is %d and is 0\n", n, _lastD);
}
else if (_lastD < 6 && _lastD != 0)
{
printf("Last digit of %d is %d and isless than 6 and not  0\n", n, _lastD);
}
return (0);
}
