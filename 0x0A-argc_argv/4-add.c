#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers followed by a new line.
 * @argv: arrays of arguments.
 * @argc: number of arguments.
 * Return: 0.
 */


int main(int argc, char *argv[])
{
	int num, digit, sum =0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit] != '\0'; digit++)
		{
			if (!isdigit(argv[num][digit]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}
