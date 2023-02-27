#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string on stdio
 * @str: input
 * return: always 0
 */

void _puts(char *str)
{
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar (str[i]);
	}
	_putchar ('\n');
}
