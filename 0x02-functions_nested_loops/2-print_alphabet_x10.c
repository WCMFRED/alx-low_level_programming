#include <stdio.h>
#include "main.h"

/*
 * print_alphabet_x10 - prints alphabets
 *
 * Description - prints 10 times
 *
 * Return: null
 */

void print_alphabet_x10(void)
{
	char i, j;

	for (i = 0; i < 10; i++)
	{
		putchar('\n');
		
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
	}
}
