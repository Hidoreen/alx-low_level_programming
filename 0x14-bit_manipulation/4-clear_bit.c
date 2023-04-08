#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: the input to inspect
 * @index: the position of a bit to clear
 *
 * Return: 1 if success othewise 0.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
