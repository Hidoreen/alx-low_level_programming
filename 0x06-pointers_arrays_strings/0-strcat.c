#include <stdio.h>
#include "main.h"

/**
 * *_strcat - is a function that concatenates two trings
 * @dest: the destination string parameter
 * @src: the string to be concatenated
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest`
 */

char *_strcat(char *dest, char *src)
{
	int j;
	int i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
