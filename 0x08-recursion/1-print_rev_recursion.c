#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: pointer to string to print
 *
 * This function uses recursion to print the string followed by a new line.
 * It first checks if the current character is not the null terminator.
 * If it's not, it prints the character and calls itself with the next
 * character in the string. This continues until it reaches the null
 * terminator, at which point it prints the new line character. The
 * `putchar` function is used to print each character.
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
