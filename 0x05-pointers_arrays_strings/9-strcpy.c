#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - a function that copies the string pointed to by scr
 * @dest: input
 * @src: input
 * return : Pointer to 'dest'
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
