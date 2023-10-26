#include "main.h"

/**
 * sqrt_guess - tries a combination of guesses of squares
 * of numbers to get to the n provided.
 *
 * @n: number whose perfect square is to be obtained.
 * @guess: the number whose square is compared against n.
 *
 * Return: returns guess if square that matches n is found
 * otherwise returns -1 if no any given square is found for n.
 */

int sqrt_guess(int n, int guess)
{
	if (guess * guess > n)
	{
		return (-1);
	}

	if (guess * guess == n)
	{
		return (guess);
	}

	return (sqrt_guess(n, guess + 1));
}


/**
 * _sqrt_recursion - Returns the natural square root of a number n.
 *
 * @n: number whose square root is to be returned.
 *
 * Return: returns natural square root of n (success)
 * or -1 (n does not have a natural square root).
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (sqrt_guess(n, 0));

}
