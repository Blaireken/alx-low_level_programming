#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Write a program that prints the alphabet
 * in lowercase, followed by a new line.Print all the letters
 * except q and e.use putchar twice in your code
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	return (0);

}
