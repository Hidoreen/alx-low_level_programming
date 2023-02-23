#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * prime_factors  - prints the largest prime factor of 612852475143
 * main - entry point
 * return: returns largest prime factor of the number 612852475143
 */

int main prime_factors(void)
{
	int n = 612852475143;

	while (n % 2 == 0)
	{
		printf(" %d ", 2);
	n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n / 3 == 0)
		{
			printf(" %d ", i);
			n = n / i;
		}
		if (n > 2)
		{
			printf(" %d ", n);
		}
		return (0);
	}

