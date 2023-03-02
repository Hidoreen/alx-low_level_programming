#include <stdio.h>
#include "main.h"

/**
 * reverse_array-a funcion that reversesan array of numbers
 * @a : an aray of numbers
 * @n : number of elements of the array
 * return : always 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
