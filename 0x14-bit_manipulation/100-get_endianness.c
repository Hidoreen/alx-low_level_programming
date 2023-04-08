#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian and 1 for little endian
 */

int get_endianness(void)
{
	int test = 1;
	char *endian = (char *) &test;

	if (*endian == 1)
	{
		return (1);
	}
	else
		return (0);
}
