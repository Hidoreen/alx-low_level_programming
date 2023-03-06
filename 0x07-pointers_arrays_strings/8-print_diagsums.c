#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - a function that prints the sum
 * of two diagonal matrixs
 * @a: a pointer
 * @size:number of bytes in memory
 * Return: Sum of diagonal matrixs
 */

void print_diagsums(int *a, int size)
{
	int index, sum1 = 0, sum2 = 0;

	for (index = 0; index < size; index++)
			{
				sum1 += a[index];
				a += size;
			}
	a -= size;
	for (index = 0; index < size; index++)
			{
				sum2 += a[index];
				a -= size;
			}
	printf("%d, %d\n", sum1, sum2);
}
