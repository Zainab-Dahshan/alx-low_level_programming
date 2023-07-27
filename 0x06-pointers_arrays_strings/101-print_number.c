#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer to the standard output using the _putchar
 * @n: The integer to be printed.
 */

void print_number(int n)
{
	if (n == 0)
	{
	_putchar('0');
	return;
	}

	if (n < 0)
	{
	_putchar('-');
	n = -n;
	}
  
	int divisor = 1;

	while (n / divisor > 9)
	{
	divisor *= 10;
	}
	while (divisor > 0)
	{
	int digit = n / divisor;
	_putchar(digit + '0');
	n %= divisor;
	divisor /= 10;
	}
}
