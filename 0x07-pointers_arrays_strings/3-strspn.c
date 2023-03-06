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
	int count, count2, count3, total;

	count = 0;
	count1 = 0;
	total = 0;

	while ((s[count] != '\0') && (s[count] != ' ') && (s[count] != ','))
	{
		count++;
	}
	while (count2 <= count)
	{
		count3 = 0;
		while (accept[count] != '\0')
		{
			if (s[count2] == accept[count])
			{
				total++;
			}
			count3++;
		}
		count++2
	}
	return (total);
}
