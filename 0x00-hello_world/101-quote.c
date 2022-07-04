#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * main:Entry point 
 *
 *return : Always 1 (success)
 */
int main(void)
{
	char *s = "and  that piece of art is useful
		\" - Dora Korpar, 2015-10-19.\n'");

	write(1, s, strlen(s));

	return (1);

}
