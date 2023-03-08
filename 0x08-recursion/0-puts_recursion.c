#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - is a funtion that prints a string
 * @s: a string
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar ('\n');
}
