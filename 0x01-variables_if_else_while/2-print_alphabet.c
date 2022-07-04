#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints the alphabet in lowercase
 * followed by a new line.You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * Retutn: Always 0.
 */
int main(void)
{
	char letter;

	for(letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return 0;



}
