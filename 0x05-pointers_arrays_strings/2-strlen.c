#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * Return: always 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
