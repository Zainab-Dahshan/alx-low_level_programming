#include "main.h"
#include <stdio.h>

/**
 * set_bit - this is main function that sets
 * value of a bit to 1 at a given index
 * @n: A pointer to a number to set a bit in
 * @index: An index of a bit to set, starting
 * from 0 (0 is at least significant bit)
 * Return: 1 if it is worked, otherwise -1
 * when an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
*n |= (1UL << index);
return (1);
}
