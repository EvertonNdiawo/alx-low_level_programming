#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the name of the program being run
 *
 * @argc: number of arguments passed to the program
 * @argv: contents of the arguments passed to the program
 *
 * Return: 0(success)
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
