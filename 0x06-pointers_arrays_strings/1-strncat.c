#include <stdio.h>
#include "main.h"

/**
 * *_strncat - a function that concatenates 2 strings
 * using st most n bytes from src
 * Description: concatenate by n bytes from scr
 * @dest: a string parameter
 * @src: a string parameter
 * @n: number of bytes to be ocucupied by src
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
