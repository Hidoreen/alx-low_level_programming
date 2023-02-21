#include "main.h"

/**
 * main - check the code.
 * _islower -> checks if the character is lowercase
 * @c: single letter input
 * islower is a command that checks for lowercase alphabets
 * Return: 1 if int c is lowercase, otherwise return 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
