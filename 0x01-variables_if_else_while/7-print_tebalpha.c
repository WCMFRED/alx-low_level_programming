#include <stdio.h>

/*
 * main - prints alphabets in reverse
 *
 * Description - null
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
