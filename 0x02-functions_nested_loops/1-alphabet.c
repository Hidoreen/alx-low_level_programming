#include "main.h"

/* print_alphabet - prints lowercase alphabet */

/*
 * print_alphabet - Funcction prints alphabets */ void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
