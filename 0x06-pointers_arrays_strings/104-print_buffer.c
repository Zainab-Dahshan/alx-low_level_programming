#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
	printf("\n");
	return;
	}
	int i, j;

	for (i = 0; i < size; i += 10)
	{
	printf("%08x ", i);

        for (j = 0; j < 10; j += 2)
        {
        if (i + j < size)
        {
  	printf("%02x", b[i + j] & 0xFF);
        } 
        else
        {
        printf("  ");
        }

	if (i + j + 1 < size)
	{
	printf("%02x ", b[i + j + 1] & 0xFF);
	}
	else
	{
	printf("   ");
	}
	}

	printf(" ");

        for (j = 0; j < 10; j++)
        {
        if (i + j < size)
        {
        char c = b[i + j];
        printf("%c", (c >= 32 && c <= 126) ? c : '.');
        }
        }

        printf("\n");
    }
}
