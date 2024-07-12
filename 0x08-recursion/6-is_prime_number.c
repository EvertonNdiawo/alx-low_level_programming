#include "main.h"

/**
 * prime_helper - Checks for the divisibility of a number.
 * @n: The number to check for divisibility.
 * @i: the divisor.
 *
 * Description: Does a divisibility test on parameter n starting with i
 * and procedes to return the result whether parameter n is a prime
 * number or not.
 * Return: 1(n has no divisor), 0(i is a successful divisor).
 */

int prime_helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime_helper(n, i + 1));
}

/**
 * is_prime_number - determines if a number is prime or not.
 * @n: the number to determine.
 *
 * Return: 1(number is prime), 0(number is not prime).
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (prime_helper(n, 2));
}
