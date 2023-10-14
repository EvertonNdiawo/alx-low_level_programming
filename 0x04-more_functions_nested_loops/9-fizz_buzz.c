#include <stdio.h>

/**
 * main - entry point of program
 *
 * Description: prits numbers from 1 to 100 followed by a newline
 * for multiples of three, prints Fizz instead of number. For
 * multiples of five, prints Buzz and for numbers that are
 * multiples of both three and five, prints FizzBuzz.
 *
 * Return: 0 always
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (i == 1)
		{
			printf("% d", i);
		}
		else
		{
			printf(" %d", i);
		}
	}

	printf("\n");

	return (0);
}

