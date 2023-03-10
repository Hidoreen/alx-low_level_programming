#include <stdio.h>
#include "main.h"

/**
 * print_buffer - prints stuff
 * @b: string to print
 * @size: size of string to print
 */

void print_buffer(char *b, int size)
{
	int i, j, res;

	i = 0;
	if (size <= 0)
		printf("\n");
	while (i < size)
	{
		printf("%8.8x:", i);
		res = _min(10, size - i);
		j = 0;
		while (j < res)
		{
			if (j % 2 == 0)
				printf(" ");
			printf("%02x", *(b + i + j));
			j++;
		}
		while (j < 10)
		{
			if (j % 2 == 0)
				printf(" ");
			printf("  ");
			j++;
		}
		printf(" ");
		j = 0;
		while (j < res)
		{
			printf("%c", printable(*(b + i + j)));
			j++;
		}
		printf("\n");
		i += 10;
	}
}
