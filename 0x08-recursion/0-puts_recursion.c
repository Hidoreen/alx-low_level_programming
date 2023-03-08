#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - is a funtion that prints a string
 * @s: a string
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
		_putchar (*s);
}
