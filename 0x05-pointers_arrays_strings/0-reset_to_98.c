#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - Updates the value of the variable the pointer points to to 98.
 *
 * Given a pointer to an `int`, this function updates the value of the variable
 * it points to to 98.
 *
 * @n: Pointer to the variable to update.
 */
void reset_to_98(int *n)
{
	*n = 98;
}
