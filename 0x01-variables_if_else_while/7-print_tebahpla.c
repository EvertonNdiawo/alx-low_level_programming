#include <stdio.h>

/**
 * main - entry point of code
 *
 * Return: 0, always a success
 */
int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}

	putchar('\n');
	return (0);
}
