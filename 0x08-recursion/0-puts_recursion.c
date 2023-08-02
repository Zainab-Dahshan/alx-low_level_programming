#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string, followed
 * by a new line, using recursion
 * @s: the string to print
 *
 * This function prints each character of the
 * string recursively until it reaches the null terminator,
 * at which point it prints a new line character.
 * It does not use any loops or static variables, and instead calls another
 * function _putchar to print individual characters.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
