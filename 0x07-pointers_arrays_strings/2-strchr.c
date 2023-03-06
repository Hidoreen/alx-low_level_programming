#include <stdio.h>
#include "main.h"

/**
 * *_strchr - a function that locates a character in a string
 * @c: a character parameter
 * @s: a string
 * Return: Return pointer of c at its first occurence
 * NULL is returned if a character is not found
 */

char *_strchr(char *s, char c)
{
	int found = 0;

	for (found = 0; s[found] >= '\0'; found++)
	{
		if (s[found] == c)
			return (s + found);
	}
	else
		return ('\0');
}
