#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of arguments passed into it
 *
 * @argc: integer to hold number of arguments
 * @argv: array to hold the arguments
 *
 * Return: 0(success)
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
