#include<stdio.h>

/**
 * main - Entry point
 *
 * Description; Prints sizeof variables
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;
	long int l;
	long long int m;
	float f;


	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %li byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %li byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %li byte(s)\n", (unsigned long)sizeof(m));
	printf("Size of a float: %li byte(s)\n", (unsigned long)sizeof(f));


	return (0);


}

