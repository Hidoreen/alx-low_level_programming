#include <stdio.h>
#include "main.h"

/**
 * *_strcat - is a function that concatenates two trings
 * @dest - the destination string
 * @src: the string to be concatenated
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest`
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
