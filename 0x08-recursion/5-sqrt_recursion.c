#include "main.h"
nt squareroot(int n, int i);
/**
 * _sqrt_recursion - function that returns the natural square
 * 	 root of a number.
 * @n: integer to check sq
 *
 * Return: -1 if n doesnt have natural sq
 * 	else return sq
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (squareroot(n, (n + 1) / 2));
}
/**
 * squareroot - checks if perfect square
 * @n: input
 * @i: counter
 * Return: if square root
 */
int squareroot(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (squareroot(n, i - 1));
}
