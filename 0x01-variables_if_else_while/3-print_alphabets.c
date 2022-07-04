#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Write a program that prints the alphabet
 * in lowercase, and then in uppercase, followed by a new
 * line.use putchar three times in your code
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);

}
