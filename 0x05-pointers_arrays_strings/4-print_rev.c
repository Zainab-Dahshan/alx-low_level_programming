#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse order, followed by a new line.
 * Given a null-terminated character array, this function first computes
 * the length of the array by iterating over its characters until the null
 * terminator is found. It then prints each character in reverse order by
 * iterating over the array in reverse, starting from the last character.
 * Finally, a new line character is printed to move the cursor
 * to the next line.
 * @s: Pointer to the character array to print in reverse order.
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	i = i - 1;
	while (i >= 0)
	{
		putchar(*(s + i));
		i--;
	}
	putchar('\n');
}
