#include <stdio.h>
/**
 * main - prints alphabets in lowercase and uppercase
 *
 * Return : 0 Always success
 */

int main(void)
{
	char i, j;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (j = 'A'; j <= 'Z'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
