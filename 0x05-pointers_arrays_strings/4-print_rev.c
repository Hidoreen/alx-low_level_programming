#include <stdio.h>
#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 * @s: input
 * Return: always 0
 */

void print_rev(char *s)
{
	int count;

	while (*(s + count) != '\0')
	{
		count++;
	}

	while (count--)
	{
		_putchar(*(s + (count)));
	}
	_putchar('\n');
}
