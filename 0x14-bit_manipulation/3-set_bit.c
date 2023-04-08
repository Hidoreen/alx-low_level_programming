#include "main.h"

/**
 * set_bit - sets the value of a bit at index
 * @n: the input to be checked
 * @index: the position of a bit
 *
 * Return:  if success, otherwise -1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);
	*n ^= (1 << index);
	return (1);
}
