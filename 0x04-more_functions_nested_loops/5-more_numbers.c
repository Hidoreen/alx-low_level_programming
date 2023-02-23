#include <stdio.h>
#include "main.h"

/**
 * more_numbers - a function that prints 0-9 x10 times
 * _putchar - prints input
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
