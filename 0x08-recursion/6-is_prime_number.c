#include "main.h"

/**
 * check_prime - function helper
 * @n: number track for prime
 * @num:possible divisor
 */

int check_prime(int n, int check)
{
	if (n > check)
	{
		if (n % check == 0)
			return (0);
		return (check_prime(n, check + 1));
	}
	return (1);
}

/**
 * is_prime_number - a function that prints prime numbers
 * @n: an integer
 * Return: int
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
       return (check_prime(n + 2));
}       
