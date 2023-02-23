#include <stdio.h>
#include "main.h"

/**
 * Main- Entry point 
 * _putchar - a function that prints input
 * more_numbers - a function that prints 0-9 x10 times
 * Return - Always 0 (success)
 */

void more_numbers(void)
{
	int i;

	int j;
	
	for (j = 0; j < 10; j++)
	{
	for (i = 0; i < 14; i++)
		_putchar (i);
	}
	_putchar ('\n');
	return (0);
}
	
