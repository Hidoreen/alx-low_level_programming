#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory.
 * @str: string
 *
 * Return: NULL if string is NULL or insufficient memory
 * otherwise pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *pstr;
	int str_len = 0;
	int i;
	/* Determine the length of the string*/
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[str_len] != '\0')
	{
		str_len++;
	}
	int i = 0;

	pstr = malloc(str_len * sizeof(*str) * str_len);
	if (pstr == NULL)
	{
		return (NULL);
	}
	int i = 0;

	while (str[i] != '\0')
	{
		pstr[i] = str[i];
		i++;
	}
	return (pstr);
}
