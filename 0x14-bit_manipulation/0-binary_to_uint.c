#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_unit - converts binary to decimal
 * @b: a pointer that points to a string of 0 and 1 chars
 *
 * Return: if b is NULL or has characters other than 0 and 1 return o
 * otherwise return the unsigned number represented.
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int result = 0, weight = 0;
	int len;

	if (b == NULL)
		return (0);
	for (len = 0; b[len])
		len++;
	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		result += (b[len] - '0') *weight;
		weight *= 2;
	}
	return(result);
}
