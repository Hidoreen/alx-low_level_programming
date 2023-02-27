#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string on stdio
 * @str: input
 * return: always 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
