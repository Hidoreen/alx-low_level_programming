#include <stdio.h>
#include "main.h"

/**
 * *string_toupper-is a function that convert
 * all lowercase letters to uppercase
 * Description: string_toupper converts lowercases
 * to uppercase letters
 * @a: a pointer to a single character
 * Return: always 0
 */

char *string_toupper(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - 32;
		i++;
	}
	return (a);
}
