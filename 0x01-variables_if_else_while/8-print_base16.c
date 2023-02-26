#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - base 16
 *
 * Return: 0 as success
 */

int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');
	for (j = 'a'; j < 'g'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}			
