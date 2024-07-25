#include <stdio.h>

/**
 * main - prints its name.
 *
 * @argc: argument count.
 * @argv: array of arguments.
 *
 * Return: 0(success).
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);

	return (0);
}
