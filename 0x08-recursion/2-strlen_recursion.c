#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to string to measure
 *
 * This function uses recursion to count the length of the string.
 * It first checks if the current character is not the null terminator.
 * If it's not, it calls itself with the next character in the string
 * and adds 1 to the result. This continues until it
 * reaches the null terminator,
 * Return: returns 0 to stop the recursion.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
	{
		return (0);
	}
}
