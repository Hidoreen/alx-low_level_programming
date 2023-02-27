#include <stdio.h>
#include "main.h"

/**
 * puts_half- a function that prints half of a string
 * @str: input
 * return - always 0
 */

void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	str -= (len / 2);
	while (*str != '\0')
	{
		_putchar('\n');
	}
}
