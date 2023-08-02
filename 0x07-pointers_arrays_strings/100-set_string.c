#include "main.h"
#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: A pointer to a pointer to a character.
 * @to: A pointer to a character.
 *
 * This function sets the value of the pointer s to the memory location
 * pointed to by to. This allows the caller to change the value of a
 * pointer to a string.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
