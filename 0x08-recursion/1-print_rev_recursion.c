#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to string to print
 *
 * This function uses recursion to print the string in reverse.
 * It first checks if the current character is not the null terminator.
 * If it's not, it calls itself with the next character in the string.
 * This continues until it reaches the null terminator, at which point
 * it starts printing the characters in reverse order as it returns from
 * each recursive call. The `putchar` function is used to print each character.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
