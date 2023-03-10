#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: the array containing the program command line
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
