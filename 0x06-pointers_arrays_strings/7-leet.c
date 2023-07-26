#include "main.h"
#include <stdio.h>

/**
 * main - entry point.
 * leet - checks whether the current character pointed
 * to by ptr is one of the letters in letters
 * Description: two loops used the first iterates over each
 * character in the str, and the second checks if the char
 * matches any letter to be replaced. The replacement
 * characters and the corresponding letters stored in
 * separate arrays. Inside the second loop, if a match is found,
 * the character replaces at the current position with
 * the corresponding replacement character and break the loop.
 * This ensures that only one replacement is made for each character
 * in the string. Converts all lowercase letters in a string to uppercase.
 *
 *
 * @str: A pointer to the null-terminated string to be converted.
 *
 * Return: return to the modified string @str.
 */
char *leet(char *str)
{
	char *ptr = str;
	char replacements[] = {'4', '3', '0', '7', '1'};
	char letters[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int i;

	while (*ptr != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*ptr == letters[i] || *ptr == letters[i + 5])
			{
				*ptr = replacements[i];
				break;
			}
		}
		ptr++;
	}

	return (str);
}
