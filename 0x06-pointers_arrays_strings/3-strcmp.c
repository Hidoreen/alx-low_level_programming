#include <stdio.h>
#include "main.h"

/**
 * _strcmp-is a function that compares 2 strings
 * Description: _strcmp is a function that compares 2 strings
 * @s1 : is string 1 parameter
 * @s2 : string 2 parameter
 * Return: return 0 when the strings are same
 * return a +ve number when s1 is larger then s2
 * return a -ve number when s2 is larger than s1
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
