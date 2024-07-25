#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 *
 * @argc: keeps track of the number of arguments
 * @argv: an array of actual arguments
 *
 * Return: result of the multiplication(success), 1(error).
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");

		return (1);
	}

	int result;
	int first;
	int second;

	first = atoi(argv[1]);
	second = atoi(argv[2]);
	result = first * second;

	printf("%d\n", result);

	return (0);

}
