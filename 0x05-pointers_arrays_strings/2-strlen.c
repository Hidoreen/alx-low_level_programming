#include <stdio.h>
#include "main.h"

/**
 * _strlen - is a function that returns the lenght of a string
 * @s: is a pointer that points to a variable of the type int
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

