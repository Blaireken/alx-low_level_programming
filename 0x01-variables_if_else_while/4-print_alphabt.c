#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Write a program that prints the alphabet
 * in lowercase, followed by a new line.Print all the letters
 * except q and e.use putchar twice in your code
 * return: Always 0 .
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
