#include "main.h"
#include <stdio.h>

/**
 * print_line - Draws a straight line in the terminal.
 *
 * @n: The number of times the character _ should be printed.
 */

void print_line(int n)
{
	int i;

	if (n <= 0) /* If n is 0 or less, only print a new line character */
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++) /* Print n underscores */
	{
		_putchar('_');
	}

	_putchar('\n'); /* Print a new line character */
}
