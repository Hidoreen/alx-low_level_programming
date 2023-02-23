#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - is a function that prints numbers apart from 2 and 4
 * _putchar - is a function that collects input
 * Return - Always 0 (success)
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) || (i == 4))
			continue;
		else
			_putchar(i + '0');
	}
	_putchar('\n');
}
