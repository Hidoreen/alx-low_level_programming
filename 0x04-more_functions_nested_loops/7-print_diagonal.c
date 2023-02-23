#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a pattern
 * @n: how many times should \ be printed (a variable)
 * Return - always 0
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
