#include "main.h"

/**
 * print_line -  a function that draws a straight line in the terminal.
 * @n - variable to be used
 * Return: a straight line
 */

void print_line(int n)
{
	int a;

	if (n <=0 )
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <=n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
