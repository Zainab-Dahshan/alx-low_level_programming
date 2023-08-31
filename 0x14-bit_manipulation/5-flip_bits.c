#include "main.h"

/**
 * flip_bits - a function that returns the number
 * of bits needed to flip to get from n to m
 * @x: the first number
 * @y: the second number
 *
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int x, unsigned long int y)
{
	unsigned long int xor_result = x ^ y;
	unsigned int count = 0;

	while (xor_result != 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
