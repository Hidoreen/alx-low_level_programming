#include <stdio.h>
#include "main.h"

/**
 * _abc integer input
 * Return: absolute value of ab
 * _abs - a function that computes the absolute value of an interger
 */int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
