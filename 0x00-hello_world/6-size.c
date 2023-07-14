#include <stdio.h>

/**
 * main - Print the sizes of various types on
 * the computer it is compiled on
 * Return:Success 0.
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", (long)sizeof(char));
	printf("Size of an int: %ld byte(s)\n", (long)sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", (long)sizeof(long));
	printf("Size of a long long int: %ld byte(s)\n", (long)sizeof(long long));
	printf("Size of a float: %ld byte(s)\n", (long)sizeof(float));

	return (0);
}
