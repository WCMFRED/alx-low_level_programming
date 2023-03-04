#include <stdio.h>
#include "main.h"

/*
 * print_alphabet_x10 - prints alphabets
 *
 *
 * Return: Always success
 */

void print_alphabet_x10(void)
{
	char i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
		putchar('\n');
	}
}
