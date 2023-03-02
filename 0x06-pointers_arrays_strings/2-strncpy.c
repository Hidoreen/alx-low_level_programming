#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - a function that copies a string
 * @dest: a string parameter
 * @src: a string parameter
 * @n: number of bytes
 * Description: _strncpy copies a string with n bytes
 * Return: Returns the resulting dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (des);
}
