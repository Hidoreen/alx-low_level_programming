#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * main - check the code.
 * @c: single letter input
 * Return: 1 if int c is lowercase, otherwise return 0
 * _islower - checks if the character is lowercase */int _islower(int c)
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
