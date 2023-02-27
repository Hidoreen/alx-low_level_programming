#include <stdio.h>
#include "main.h"

/**
 * swap_int - a function that swaps the value of 2 integers
 * @a: is a pointer that points to a variable
 * of int type
 * @b:is a pointer that points to a variable
 * of int type
 * return: always 0
 */

void swap_int(int *a, int *b)
{
	int i = 0;
	int j = 0;
	*a = *b;
	*a = i;
	*b = *a;
	*b = i;
	*b = j;
	*a = j;
}
