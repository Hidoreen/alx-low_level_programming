#include <stdio.h>
#include "main.h"

/**
 * Maint - Entry Point
 * _putchar - a function that prints input
 * print_line- a function that prints a line on the terminal
 * Return - ALWAYS 
 * int c - a variable
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
