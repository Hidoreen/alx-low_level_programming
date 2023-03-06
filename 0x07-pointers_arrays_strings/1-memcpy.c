#include <stdio.h>
#include "main.h"

/**
 * _memcpy - a function that copies the memory
 * @dest: the memory to receive the copied memory
 * @src: the source of the memory
 * @n: the size of memory
 * Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
