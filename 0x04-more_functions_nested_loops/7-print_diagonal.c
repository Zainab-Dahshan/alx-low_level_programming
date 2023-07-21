#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints `n` backslash characters,
 *			followed by a newline character.
 *
 * @n: number of backslashs to print.
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}

		printf("\\");
		printf("\n");
	}
}
