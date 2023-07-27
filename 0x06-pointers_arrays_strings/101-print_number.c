#include "main.h"
#include <stdio.h>

/**
 * print_number - prints digits.
 * @n: number checked.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	int numDigits = 0;
	int temp = n;

	while (temp != 0)
	{
		temp /= 10;
		numDigits++;
	}

	while (numDigits > 0)
	{
		int divisor = 1;

		for (int i = 1; i < numDigits; i++)
		{
			divisor *= 10;
		}

		int digit = n / divisor;

		_putchar(digit + '0');

		n %= divisor;
		numDigits--;
	}
}
