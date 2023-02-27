#include <stdio.h>
#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 * @s: input
 * Return: always 0
 */

void print_rev(char *s)
{
	int i, temp;
	int len = 0;

	while (*s != '\0')
	{
		len++;
	}
	for (i = 0; i < i/2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
	_putchar ('\n');
}
