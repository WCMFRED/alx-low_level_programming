#include <stdio.h>
#include "main.h"

/*
 * main - prints alphabets in lowercase
 *
 * Description - prints in lowercase
 *
 * Return: 0 as success
 */

void print_alphabet(void)
{
	char i;

	for(i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	
	return (0);
}
