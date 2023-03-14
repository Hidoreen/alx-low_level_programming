#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char.
 * @size: size of the array to be initialized.
 * @c: specific char to intialize the array with.
 *
 * Return: NULL if size == 0 or the function fails
 * otherwise a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	/* initialize a pointer*/
	char *ptr;
	unsigned int count = 0;

	if (size == 0)
	{
		return (NULL);
	}
	/*Allocate space*/
	ptr = malloc(size * sizeof(char));
	/*put the character c in each of the memory*/
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < size; count++)
	{
		ptr[count] = c;
	}
	return (ptr);
}
