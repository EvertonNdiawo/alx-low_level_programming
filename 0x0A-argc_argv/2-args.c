#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives inclusive of first one.
 *
 * @argc: integer that holds number of arguments passed.
 * @argv: array of arguments passed to main.
 *
 * Return: 0(success)
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
