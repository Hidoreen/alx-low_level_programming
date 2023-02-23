#include <stdio.h>
#include "main.h"

/**
 * Main - Entry point
 * @c - Variable
 * _isdigit - a function that prints digits
 * Return : Return 1 if c is a digit, otherwise return 0
 */

int _isdigit(int c)
{
	for (c >= 48; c <= 57)
		return (1);
	else
		return (0);
}
