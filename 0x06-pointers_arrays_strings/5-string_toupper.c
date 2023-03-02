#include <stdio.h>
#include "main.h"

/**
 * *string_toupper-is a function that convert
 * all lowercase letters to uppercase
 * Description: string_toupper converts lowercases
 * to uppercase letters
 * @'' - a pointer to a single character
 * Return: always 0
 */

char *string_toupper(char *)
{
	int i;

	for (i = 0;  a[i] != '\0'; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] = a[i] - 32;
			i++;
		}
		else
			_putchar (i);
	}
	return (0);
}
