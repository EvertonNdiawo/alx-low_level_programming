#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers and prints the results.
 *
 * @argc: integer of number of arguments passed to the function
 * @argv: array of the numbers passed as argument
 *
 * Return: 0(success) and print result, 1(failure) and print Error.
 *
 */

int main(int argc, char **argv)
{
	int mul;
	int n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	mul = n1 * n2;

	printf("%d\n", mul);

	return (0);
}	
