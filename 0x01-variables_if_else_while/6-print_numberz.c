#include <stdio.h>

/**
 * main - prints numbers
 *
 * Description - null
 *
 * Return : 0 success
 *
 */

int main(void)
{
	int i;
	char a;
	i = 0;

	while (i < 10)
	{
		putchar((i % 10) + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
