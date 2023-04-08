#include "main.h"

/**
 * get_bit - gives a value of a bit at a given position
 * @index: position of the bit
 * @n: input long integer
 *
 * Return: the value of the specified bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int k;

	if (n == 0 && index < 64)
		return (0);
	for (k = 0; k <= 63; n >>= 1, k++)
	{
		if (index == k)
		{
			return (n & 1)
		}
	}
	return (-1);
}
