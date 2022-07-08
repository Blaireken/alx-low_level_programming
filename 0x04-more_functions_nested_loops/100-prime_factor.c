#include <stdio.h>
#include <math.h>

/**
 * main - entry point.
 * return:0 always
 */
int main(void)
{
	long int num = 612852475143;
	int prime;

	for (prime = 2; prime <= sqrt(num); prime++)
	{
		if (num % prime == 0)
		{
			num = num / prime;
			prime = 1;
		}
	}
	printf("%ld\n", num);

	return (0);
}
