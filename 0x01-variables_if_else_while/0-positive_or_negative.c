#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point of code.
 *
 * Description: A program that prints whether a random generated number is
 * positive, negative or zero.
 *
 * Return: 0 success, otherwise fail.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
