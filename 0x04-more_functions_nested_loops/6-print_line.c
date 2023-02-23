#include <stdio.h>
#include "main.h"

/**
 * print_line- a function that prints a line on the terminal
 * _putchar - prints input
 * @n: number of lines
 * return - always 0
 */

void print_line(int n)
{
	int co;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= n; co++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
