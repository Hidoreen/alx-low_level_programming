#include <stdio.h>
#include "main.h"

/**
 * *cap_string - is afunction that capitalizes all letters of a string
 * @a: a pointer
 * Return:a pointer in the changed state
 */

char *cap_string(char *a)
{
	int index = 0;

	while (a[index])
	{
		while (!(a[index] >= 'a' && a[index] <= 'z'))
			index++;
		if (a[index - 1]  == ' ' ||
				a[index - 1] == '\t' ||
				a[index - 1] == '\n' ||
				a[index - 1] == ',' ||
				a[index - 1] == ';' ||
				a[index - 1] == '.' ||
				a[index - 1] == '!' ||
				a[index - 1] == '?' ||
				a[index - 1] == '"' ||
				a[index - 1] == '(' ||
				a[index - 1] == ')' ||
				a[index - 1] == '{' ||
				a[index - 1] == '}' ||
				index == 0)
			a[index] -= 32;
	}
	return (a);
}
