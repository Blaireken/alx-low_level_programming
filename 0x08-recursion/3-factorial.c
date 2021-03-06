#include "main.h"

/**
 * factorial - function that returns the factorial
 * of a given number.
 * @n: no to factorize
 *
 * Return: if n is lower than 0 return -1
 * return factorial n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
		return (1);
	else
		return ((n) * factorial(n - 1));
}
