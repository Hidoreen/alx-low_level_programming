#include <stdio.h>
#include "main.h"

/**
 *  _strspn - Find length of byte from s that are in accept
 *  @s: String to search
 *  @accept: Bytes to match to s
 *  Return: Number of bytes that match in a row starting from s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
