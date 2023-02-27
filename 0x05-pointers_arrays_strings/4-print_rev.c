#include <stdio.h>
#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 * @s: input
 * Return: always 0
 */

void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;
	for (i = i - 1; i >= i--)
		_putchar (s[i]);
	_putchar ('\n');
}
