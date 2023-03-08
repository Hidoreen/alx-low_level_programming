#include <stdio.h>
#include "main.h"

/**
 * myHelp- a function that gets the squares
 *description- my help helps get root
 * @i: number to square
 * @n: number to check square
 * return: square root
 */

int myHelp(int i, int n)
{
	if (i * i != n)
	{
		int j;

		if (i > n)
		{
			return (-1);
		}
		j = myHelp(i + 1, n);
			return (j + i);
	}
	return (0);
}

/**
 * _sqrt_recursion - a funtion that returns the natural square of a number
 * @n: integer
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (myHelp(i, n) == n && n != 1)
		return (-1);
	return (myHelp(i, n));
				}
