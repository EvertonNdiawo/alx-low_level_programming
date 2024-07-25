#include <stdio.h>

/**
 * main - prints all the arguments it receives
 *
 * @argc: the number of arguments
 * @argv: an array of actual arguments
 *
 * Return: 0(success).
 */

int main(int argc, char **argv)
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
