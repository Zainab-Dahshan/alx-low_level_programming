#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: integer to be checked.
 *
 * Return: the absolute value of n.
 */
int _abs(int n)
{
	if (n < 0)
	{ /* If n is negative */
		return (-n); /* Return the negation of n (i.e., its absolute value) */

	}

	else
	{ /* Otherwise */

		return (n); /* Return n (which is already positive or zero) */
	}
}
