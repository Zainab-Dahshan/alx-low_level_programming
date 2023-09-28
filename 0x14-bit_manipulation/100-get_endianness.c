#include "main.h"
#include <stdio.h>

/**
 * get_endianness - this is main function that
 * checks an endianness of a system
 * Return: 0 on big endian, or 1 if it is little endian
 */
int get_endianness(void)
{
int number = 1;

if (*(char *)&number == 1)
{
return (1);
}
return (0);
}
