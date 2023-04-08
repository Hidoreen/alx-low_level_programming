#include "main.h"

/**
 * flip_bits - get number of bits needed to get
 * from one number to another
 * @n: first number
 * @m: second number
 *
 * Return:no.of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits;

	for (bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bits++;
	}
	return (bits);
}
