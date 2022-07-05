#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times
 * the alphabet, in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		letter *= 10;

		putchar(letter);
	}
	putchar('\n');

}


