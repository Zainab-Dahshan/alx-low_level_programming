#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14,
 *                  followed by a new line.
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)	/* Repeat 10 times */
	{
		for (j = 0; j <= 14; j++)	/* Print numbers from 0 to 14 */
		{
			if (j > 9)		/* Print the second digit of two-digit numbers */
			{
				_putchar (j / 10 + '0');	/* Print the tens digit */
			}

			_putchar (j % 10 + '0');	/* Print the ones digit */
		}

		_putchar ('\n');		/* Print a new line character */
	}
}
