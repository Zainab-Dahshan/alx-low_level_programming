#include "function_pointers.h"

/**
 * print_name - main function
 * Description: the function prints a name
 * by calling a callback function with a message string.
 *
 * @name: The name to print.
 * @f: The callback function to call with the message string.
 * The function should take a char pointer as an argument and
 * return nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	char *message = (char *) malloc(sizeof(char) * (strlen(name) + 8));

	if (message == NULL)
	{
		exit(1);
	}
	strcpy(message, "Hello, ");
	strcat(message, name);
	f(message);
	free(message);
}
