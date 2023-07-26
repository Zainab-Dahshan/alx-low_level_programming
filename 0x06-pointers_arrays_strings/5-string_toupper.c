#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * string_toupper - Converts all lowercase letters
 * in a string to uppercase.
 *
 * Description: Converts all lowercase letters in
 * the null-terminated string @str to uppercase using
 * the toupper() function from the <ctype.h> library.
 *
 * @str: A pointer to the null-terminated string to be converted.
 *
 * Return: A pointer to the converted string @str.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = toupper(str[i]);
		i++;
	}

	return (str);
}
