#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints name of program follwed by a new line.
 * @argc: Number of command line arguments.
 * @argv: array that contains the command line arguments
 * Return: 0.
 */

int main(int __attribute__ ((unused)) argc, char *argv[])
{
	printf("%s\n", *argv[0]);

return (0);
}
