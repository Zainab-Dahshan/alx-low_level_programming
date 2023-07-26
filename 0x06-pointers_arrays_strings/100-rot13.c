#include "main.h"
#include <stdio.h>

/**
 * rot13 - checks whether the current character
 * pointed to by ptr is in the range of 'a' to 'm' or 'A' to 'M'.
 * Description: The function takes a pointer to a string as input
 * and initializes a pointer ptr to point to the start of
 * the input string str. It also includes a loop that
 * continues until the end of the string is reached,
 * as indicated by the null terminator character '\0'.
 *
 * @str: A pointer to the null-terminated string to be converted.
 *
 * Return: return to the modified input string @str.
 */
char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
	if ((*ptr >= 'a' && *ptr <= 'm') || (*ptr >= 'A' && *ptr <= 'M'))
	{
	*ptr += 13;
	}
	else if ((*ptr >= 'n' && *ptr <= 'z') || (*ptr >= 'N' && *ptr <= 'Z'))
	{
	*ptr -= 13;
	}
	ptr++;
	}

	return (str);
}
