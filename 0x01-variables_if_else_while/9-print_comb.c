#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 * Return: Always 0.
 */
int main(void)
{
	int w;

	for (w  = 0; w <= 9; w++)
	{
		putchar((w % 10) + '0');
		if (w == 9)
			continue;
		
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
