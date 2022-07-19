#include "main.h"

/**
 * _strchr - Write a function that locates a character
 * 	 in a string.Returns a pointer to the first
 * 	  occurrence of the character c in the string s
 * @s: String to be checked
 * @c: character to be checked
 *
 * Return: Null if no character is found.
 * 	a pointer to the first occurence if found
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
