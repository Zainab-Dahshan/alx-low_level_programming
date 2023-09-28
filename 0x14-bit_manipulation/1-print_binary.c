#include "main.h"
#include <stdio.h>

/**
 * print_binary - this is main function that
 * prints the binary representation of a number
 * @n: Number to be printed in binary
 */
void print_binary(unsigned long int n)
{
if (n > 1)
{
print_binary(n >> 1);
}
putchar((n & 1) + '0');
}
