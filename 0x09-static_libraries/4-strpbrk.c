#include <stdio.h>
#include "main.h"

/**
 * *_strpbrk - a function that searches a string of
 * n bytes
 * @s: a pointer that points to
 * a variable of char datatype
 * @accept: a pointer to a char variable
 * Return: a pointer to s and NULL if no such
 * yte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
