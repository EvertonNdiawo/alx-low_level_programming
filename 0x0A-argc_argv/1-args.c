#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 *
 * @argc: parameter that takes care of number of arguments.
 * @argv: array of actual arguments passed.
 *
 * Return: 0(success).
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);


	return (0);
}
