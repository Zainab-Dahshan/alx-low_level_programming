#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: parameter to be checked.
 *
 * Return: 1 if char is a letter, lowercase or uppercase,
 * 		 0 otherwise.
 */
int _isalpha(int c)
{
	/* Check if the character is a letter, lowercase or uppercase */
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))

		return (1); /* The character is a letter */
	else

		return (0); /* The character is not a letter */
	
}
