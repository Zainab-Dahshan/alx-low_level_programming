#include "function_pointers.h"

/**
 * print_name - main function
 * Decritption: the function Calls a callback
 * function with a name argument, after
 * checking for invalid input.
 *
 * @name: The name to pass to
 * the callback function.
 * @f: The callback function to call
 * with the name argument.
 * The function should take a char pointer
 * as an argument and return nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		printf("Invalid input\n");
		return;
	}

	f(name);
}

/**
 * print_name_default - Prints a name with a default message.
 *
 * @name: The name to print.
 */
void print_name_default(char *name)
{
	printf("Name: %s\n", name);
}
