#include "main.h"
#include <stdio.h>

/**
 * flip_bits - this is main function that returns
 * number of bits needed to flip to get from one number to another
 * @n: First number
 * @m: Second number
 * Return: Number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;
unsigned int count = 0;

while (xor_result != 0)
{
count += xor_result & 1;
xor_result >>= 1;
}
return (count);
}
