#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - starting point of program
 *
 * Description: A program that assigns a random number to a variable n each
 * time it is executed and prints the last digit of the number stored in
 * the variable.
 *
 * Return: Returns 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int newN ;

	newN = n % 10;

	if (newN > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, newN);
	}
	else if (newN == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, newN);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, newN);
	}

	return (0);
}
