#include "main.h"

/**
 * prime - finds out if a number is prime recursively
 * @n: number to assess.
 * @i: iterator
 *
 * Return: returns 1 (if n is prime), 0 (if not)
 */

int prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}

	return (prime(n, i - 1));
}

/**
 * is_prime_number - returns whether an integer is a prime number or not
 *
 * @n: integer to evaluate
 *
 * Return: returns 1 if n is prime, 0 if not.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (prime(n, n - 1));
}
