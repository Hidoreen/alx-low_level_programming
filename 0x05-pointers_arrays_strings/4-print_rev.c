#include <stdio.h>
#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 * @s: input
 * Return: always 0
 */

void print_rev(char *s)
{
	int length = strlen(s);

	for (int i = length - 1; i >= 0; i--)
	{
		_putchar (s[i]);
	}
	_putchar ('\n');
}
