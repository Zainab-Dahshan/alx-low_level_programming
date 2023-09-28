#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - this is main function that converts
 * a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 characters.
 * Return: Converted number, or 0 if there is an invalid
 * character in a string or if a string is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int number = 0;
int z;

if (b == NULL)
	return (0);

for (z = 0; b[z] != '\0'; z++)
{
if (b[z] != '0' && b[z] != '1')
	return (0);

number = number * 2 + (b[z] - '0');
}
return (number);
}
