#include "main.h"
#include <stdio.h>

/**
 * rot13 - change letters to ROT13.
 * @s: analized string.
 *
 * Return: String with all letters in ROT13 base.
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
