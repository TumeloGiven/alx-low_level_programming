#include <stdio.h>
/**
 * main - This program writes the types of various types
 * Return: 0
 */
int main(void)
{
char w;
int x;
long int y;
long long int z;
float f;
printf("Size of a char: %b byte(s)\n", sizeof(w));
printf("Size of an int: %b byte(s)\n", sizeof(x));
printf("Size of a long int: %b byte(s)\n", sizeof(y));
printf("Size of a long long int: %b byte(s)\n", sizeof(z));
printf("Size of a float: %b byte(s)\n", sizeof(f));
return (0);
}
