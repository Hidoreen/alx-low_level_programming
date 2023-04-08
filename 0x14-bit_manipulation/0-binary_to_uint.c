#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to decimal
 * @b: a pointer that points to a string of 0 and 1 chars
 *
 * Return: if b is NULL or has characters other than 0 and 1 return o
 * otherwise return the unsigned number represented.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int len, weight = 0;

	if (b == NULL)
		return (0);
	result = 0;

	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, weight = 1; len >= 0; len--, weight *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		if (b[len] & 1)
		{
			result += weight;
		}
	}
	return (result);
}
