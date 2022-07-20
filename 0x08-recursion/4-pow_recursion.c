#include "main.h"

/**
 * _pow_recursion - function that returns the value of
 *  x raised to the power of y
 *  @x: variable to be checked
 *  @y: variable to be checked
 *
 *  Return: if Y < 0 return -1
 *  	else return x^y
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);

