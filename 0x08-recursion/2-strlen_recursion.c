#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - a function that returns
 * the length of a string.
 * @s: a string
 * Return:the length of a string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (s[len] > 0)
	{
		len++;
	_strlen_recursion(s + 1);
	}
}
