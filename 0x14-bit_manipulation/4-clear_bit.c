#include "main.h"

/**
 * clear_bit - a function that sets the value of 
 * bit to 0 at a given index
 * @n: pointer to the modified number
 * @index: an index of the bit to clear, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
