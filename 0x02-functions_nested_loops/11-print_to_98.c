#include <stdio.h>
#include "main.h"

/**
*print_to_98 - e
*@n: the start number
*main - Entry point
*return - Always 0
*/

void print_to_98(int n)
{
	if (n < 98)
	{
	for (n = n ; n < 98 ; n++)
	{
	printf("%i, ", n);
	}
	}

	if (n > 98)
	{
	for (n = n ; n > 98 ; n--)
	{
	printf("%i, ", n);
	}
	}
	if (n == 98)
	{
	printf("%i", n);
	}
	printf("\n");
}
