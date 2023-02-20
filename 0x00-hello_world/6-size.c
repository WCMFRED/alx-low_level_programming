#include <stdio.h>

/*
 * main - this is the main function
 *
 * Description - Start of the function
 *
 * Return : 0 as success
 */

int main(void)
{
	int i;
	char c;
	long int d;
	long long int l;
	float f;

	printf("The size of char: %lu byte(s)\n", sizeof(c));
	printf("The size of int: %lu byte(s)\n", sizeof(i));
	printf("The size of long int: %lu byte(s)\n", sizeof(d));
	printf("The size of long long int: %lu byte(s)\n", sizeof(l));
	printf("The size of float: %lu byte(s)\n", sizeof(f));
	return (0);
}
