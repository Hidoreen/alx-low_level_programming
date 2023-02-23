#include <stdio.h>
#include "main.h"

/**
 * _isdigit-chec if a character is a digit
 * main - Entry point
 * @c: Variable
 * return ; return 1 if c is a digit, otherwise return 0
 */

int _isdigit(int c)
{
	for (c >= 48; c <= 57)
		return (1);
	else
		return (0);
}
