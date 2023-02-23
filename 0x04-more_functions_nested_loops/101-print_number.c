#include <stdio.h>
#include "main.h"

/**
 * print_number - prints an interger
 *_putchar - prints input
 * @n: parameter to hold a number
 * Return : Return an integer
 */

void print_number(int n)
{
	for (int i = 0; i <= 9; i++)
	{
		_putchar ( '0' + i);
	}
	for ( int l = 0; l < 26; l++)
	{
		_putchar ('A' + l);
	}
	for (char c = '0'; c <= '9'; c++)
	{
		_putchar ('c');
	}
	_putchar ('\n');
	return (0);
}
