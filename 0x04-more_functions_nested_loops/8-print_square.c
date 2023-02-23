#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * print_squar - a function that prints a square
 * return - Return a square
 * size - size of the square
 */

void print_square(int size)
{
	int co, ro;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= size; co++)
		{
			_putchar('#');
			for (ro = 2; ro <= size; ro++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
