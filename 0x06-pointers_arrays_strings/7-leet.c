#include <stdio.h>
#include "main.h"

/**
 * *leet - a function that encodes a string into 1337
 * @s: string to encode
 * Return: pointer to encoded string
 */
char *leet(char *s)
{
	int i, j, n;

	int code[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	char letters[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};

	n = 10;
	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < n)
		{
			if (letters[j] == s[i])
				s[i] = code[j];
			j++;
		}
		i++;
	}
	return (s);
}
