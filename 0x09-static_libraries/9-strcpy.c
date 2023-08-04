#include "main.h"

/**
 * _strcpy - main function
 * @dest: This is destination array
 * @src: This is the source array
 *
 * Return: This return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
