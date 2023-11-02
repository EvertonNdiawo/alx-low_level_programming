#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds all positive numbers passed as arguments
 *
 * @argc: integer whose value is the number of integers passed to main.
 * @argv: array of all the arguments passed to main.
 *
 * Return: 0(success) and print the result, 1(failure) and print error
 * if one of the numbers contains symbols that are not digits or print
 * 0 if no number is passed to the program.
 *
 */

int main(int argc, char **argv)
{
	int result = 0;
	int i;
	int num;

	if (argc < 3)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (num == 0 && argv[i][0] != '\0')
		{
			printf("Error\n");
			return (1);
		}

		result += num;

	}

	printf("%d\n", result);

	return (0);
}
