#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _strlen - Computes the length of a string.
 * @s: The string to compute the length.
 *
 * Return: The length of the string.
 */
size_t _strlen(const char *s)
{
	size_t len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value of the string.
 */
int _atoi(const char *s)
{
	int sign = 1;
	int value = 0;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	while ((*s))
	{
		value = value * 10 + (*s - '0');
		s++;
	}

	return (sign * value);
}

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 != 0)
	print_number(n / 10);

	_putchar(n % 10 + '0');
}

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of arguments.
 * @argv: The arguments.
 *
 * Return: 0 if successful, 98 otherwise.
 */
int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
	for (j = 0; argv[i][j] != '\0'; j++)
	{

	if (argv[i][j] > 57 || argv[i][j] < 48)
		{
		printf("Error\n");
		exit(98);
		}
	}
	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
