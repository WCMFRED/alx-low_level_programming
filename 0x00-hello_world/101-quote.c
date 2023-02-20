#include <stdio.h>

/*
 * main - This is the main function
 *
 * Description - beginning of the file
 *
 * Return : 1 as success
 */

int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
