#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string to stdout, followed by a new line.
 * Given a null-terminated character array, this function prints each
 * character in the array to stdout using the putchar() function. Once
 * all characters have been printed, a new line character is printed
 * to move the cursor to the next line.
 * @str: Pointer to the character array to print.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	putchar(str[i]);
	i++;
	}
	putchar('\n');
}
