#include <stdio.h>
#include "main.h"

/**
 * Main - Entry Point
 * print_diagonal - a function that prints a pattern
 * @n- how many times should \ be printed (a variable)
 * Return -  diagonal
 */

void print_diagonal(int n)
{
	int n = 5;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (j = 1; j <= n; j++)
		{
			for (i = 1; i < n; i++)
			{
				if (j == i)
				{
				_putchar ('\');
				else
					_putchar (' ');
				}
		_putchar ('\n');
	}
	return (0);
}
