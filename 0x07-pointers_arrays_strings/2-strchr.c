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
	while (*s)
	{
		if (*s != c)
			s++;
		return (s);
	}
	else
		if (c == '\0')
			return (NULL);
}
