#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <bits/stdio_lim.h>

int _putchar(char c);

/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to check.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - Computes the length of a string.
 * @s: The string to compute the length of.
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

	while (_isdigit(*s))
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
int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}

	if (_strlen(argv[1]) == 0 || _strlen(argv[2]) == 0)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}

	for (int i = 0; argv[1][i] != '\0'; i++)
	{
	if (!_isdigit(argv[1][i]))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}
	}

	for (int i = 0; argv[2][i] != '\0'; i++)
	{
	if (!_isdigit(argv[2][i]))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	print_number(result);
	_putchar('\n');

	return (0);
}
