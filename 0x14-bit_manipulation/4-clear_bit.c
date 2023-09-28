#include "main.h"
#include <stdio.h>

/**
 * clear_bit - this is main function that sets
 * the value of a bit to 0 at a given index
 * @n: A pointer to a number to clear the bit in
 * @index: An index of a bit to clear, starting
 * from 0 (0 is the least significant bit)
 * Return: 1 if it is worked, otherwise
 * -1 when an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
*n &= ~(1UL << index);
return (1);
}
