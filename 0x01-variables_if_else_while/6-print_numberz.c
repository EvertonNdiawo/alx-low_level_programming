#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of code.
 *
 * Return: 0 always a success.
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		putchar('\n');
	}

	return (0);
}
