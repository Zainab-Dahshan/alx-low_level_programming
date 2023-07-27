#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * cap_string - This function takes a pointer to
 * a string as an argument and capitalizes the first
 * letter of each word in the string.
 * Description: The function works by iterating over
 * each character in the string and determining whether
 * it is a letter or not. If the character is a letter and
 * it is the first letter of a word, then it is capitalized.
 * @str: A pointer to the string to be capitalized.
 * Returns: A pointer to the modified string.
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
