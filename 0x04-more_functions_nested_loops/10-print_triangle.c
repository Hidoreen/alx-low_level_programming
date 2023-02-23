#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * return - always 0
 * _putchar - prints input
 * void print_triangle a fuunction that prints a triangle
 * size - the size of the triangle
 */

void print_triangle(int size)
{
	int sp, ro, tr;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ro = 0; ro <= (size - 1); ro++)
		{
			for (sp = 0; sp < (size - 1) - ro; sp++)
			{
				_putchar(' ');
			}
			for (tr = 0; tr <= ro; tr++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
