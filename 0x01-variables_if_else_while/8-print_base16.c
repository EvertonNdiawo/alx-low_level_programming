#include <stdio.h>

/**
 * main - entry point of code.
 *
 * Return: 0 always success.
 */

int main(void)
{
	int i;

	for (i = 48; i <= 56; i++)
	{
		putchar(i);
	}

	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
