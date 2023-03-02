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
	int j = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		;
	do {
		*(dest + i + j) = src[j];
		j++
	}
	while (*(src + j))
		return (dest);
}
