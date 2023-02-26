#include <stdio.h>

/*
 * main - Entry point
 *
 * Description - prints alphabets in reverse
 *
 * Return: 0 as success
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
