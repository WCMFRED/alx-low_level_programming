#include <stdio.h>
/**
 * main - This is the start of code
 *
 * Description - int
 * Return: 0 Always success
 */

int main(void)
{
	char i;

	for (i = 'a'; i < = 'z'; i++)
	{
		if ((i != 'e') && (i != 'q'))
			putchar(i);
	}
	putchar('\n');
	return (0);
}
