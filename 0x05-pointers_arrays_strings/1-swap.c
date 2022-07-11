#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: interger to be swapped
 * @b: interger to be swaped too
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
