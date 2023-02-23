#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * return - always 0
 */

int main(void)
{
	int i;
	char j[] = "Fizz";
	char k[] = "Buzz";
	char jk[] = "FizzBuzz;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0);
		{
			printf("%s\n", j);
		}
		if (i % 5 == 0)
		{
			printf("%s\n", k);
		}
		if (i % 3 == 0 && i % 5 == 0)
			printf("%s\n",jk);
	}
	else
		printf("%d\n", i);
	return (0);
}
