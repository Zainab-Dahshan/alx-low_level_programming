#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the order of elements in an array.
 *
 * Description: Reverses the order of the @n elements
 * in the integer array @a by swapping the first element
 * with the last element, the second element with the second-to-last
 * element, and so on, until the middle of the array is reached.
 * If @n is odd, the middle element is left unchanged.
 *
 * @a: A pointer to the first element of the array.
 * @n: The number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
