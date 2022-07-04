#include <stdio.h>
#include <unistd.h>

/**
 * main:Entry point 
 *
 *return : Always 1 (success)
 */
int main (void)
{
	write(STDOUT_FILRNO, "and  that piece of art is useful
			\" - Dora Korpar, 2015-10-19\r.",59);

	return (1);

}
