#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that elements of an array
 * @n: number of elements of the array
 * @a: is a pointer that points to a variable of type int
 * return - always 0
 */

void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%d", a[k]);
		if (k != n - 1)
			printf(", ");
	}
	printf("\n");
}
