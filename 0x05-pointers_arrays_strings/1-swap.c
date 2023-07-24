#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * swap_int: a function that swaps the values of two integers.
 *@x: 1st line to swap
 *@y: 2nd line to swap
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
