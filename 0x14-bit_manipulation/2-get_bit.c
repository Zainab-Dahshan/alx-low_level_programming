#include "main.h"
#include <stdio.h>

/**
 * get_bit - this is main function that returns value
 * of a bit at a given index
 * @n: Number to get the bit from
 * @index: An index of a bit to get, starting
 * from 0 (0 is at least significant bit)
 * Return: Value of a bit at index index,
 * otherwise -1 when an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
return ((n >> index) & 1);
}
