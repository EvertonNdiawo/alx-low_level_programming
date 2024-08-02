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
	while (cents > 0)
	{
		if (cents >= 25)
		{
			total_coins += cents / 25;
			cents = cents % 25;
		}
		else if (cents >= 10)
		{
			total_coins += cents / 10;
			cents = cents % 10;
		}
		else if (cents >= 5)
		{
			total_coins += cents / 5;
			cents = cents % 5;
		}
		else if (cents >= 2)
		{
			total_coins += cents / 2;
			cents = cents % 2;
		}
		else if (cents >= 1)
		{
			total_coins += cents / 1;
			cents = cents % 1;
		}
	}
	printf("%d\n", total_coins);
	return (0);
}
