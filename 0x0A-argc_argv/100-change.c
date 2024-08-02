#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for a given amount
 * @argc: counts the number of arguments passed to the program.
 * @argv: keeps the actual arguments passed to the program.
 *
 * Return: the minimum number of coins(success), 1(Error), 0(failure).
 */

int main(int argc, char **argv)
{
	int total_coins = 0;
	int cents;
	int denominations[] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && cents > 0; i++)
	{
		total_coins += cents / denominations[i];
		cents %= denominations[i];
	}

	printf("%d\n", total_coins);
	return (0);
}
