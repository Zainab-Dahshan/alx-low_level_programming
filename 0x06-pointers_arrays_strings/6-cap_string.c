#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * cap_string function - takes a pointer to a string as
 * input and initializes a pointer ptr to point to the
 * start of the input string str. It also initializes
 * a flag capitalize_next to 1 to indicate that the next
 * character encountered will be the start of a new word
 * and should be capitalized.
 * string_toupper - Converts all lowercase letters in
 * a string to uppercase.
 * isalpha - Checks if the character is alphabetic
 *capitalize_next - Reset the flag if the current character is a separator
 * @str: A pointer to the null-terminated string to be converted.
 *
 * Return: return to the modified string @str.
 */

char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize_next = 1;

	while (*ptr != '\0')
	{
		if (isalpha(*ptr))
		{
			if (capitalize_next)
			{
				*ptr = toupper(*ptr);
				capitalize_next = 0;
			}
		}
		else
		{
			capitalize_next = 1;
		}

		ptr++;
	}

	return (str);
}
