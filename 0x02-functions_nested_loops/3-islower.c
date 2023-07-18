#include "main.h"

/**
 * Main - Entry Point
 * _islower -  checks for lowercase character.
 * @c char to be checked.
 *
 * Return: 1 if char is lower case, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
