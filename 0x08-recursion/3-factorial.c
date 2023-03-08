#include <stdio.h>
#include "main.h"

/**
 * factorial - a function that prints a factorial of a given number
 * @n: the number
 * Return: return -1 if n < 0;
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
}
