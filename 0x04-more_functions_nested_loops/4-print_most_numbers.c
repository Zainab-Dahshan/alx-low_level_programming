#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Prints the numbers from 0 to 9,
 *		except 2 and 4, followed by a new line.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4) /* Skip 2 and 4 */
		{
			_putchar(i + '0'); /* Print the ASCII value of the digit */
		}
	}

	_putchar('\n'); /* Print a new line character */
}
