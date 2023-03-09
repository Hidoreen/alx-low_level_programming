#include "main.h"

int check_pal(char *s, int t, int l);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if a palindrome else return 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - finds length of string
 * @s: string to extract length
 *
 * Return:length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - check for palindrome recursively
 * @s: string to be checked
 * @t: iterator
 * @l: length of string
 * Return: always 0
 */

int check_pal(char *s, int t, int l)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
