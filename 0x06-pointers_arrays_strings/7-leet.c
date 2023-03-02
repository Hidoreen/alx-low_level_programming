#include <stdio.h>
#include "main.h"

/**
 * *leet - a function that encodes a string into 1337
 * @s: string to encode
 * Return: pointer to encoded string
 */
char *leet(char *s)
{
	char *temp;
	temp  = s;

	while (*s)
	{
		(*s == 'a' || *s == 'A') ? *s = '4' : 0;
		(*s == 'e' || *s == 'E') ? *s = '3' : 0;
		(*s == 'o' || *s == 'O') ? *s = '0' : 0;
		(*s == 't' || *s == 'T') ? *s = '7' : 0;
		if (*s == 'l' || *s == 'L')
			(*s) = '1';
		s++;
	}
	return (temp);
}
