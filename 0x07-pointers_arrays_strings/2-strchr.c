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

	do {
		if (*s == c)
			found = 1;
	}
	while (found == 0 && *s++ != '\0');
	return (s);
}
