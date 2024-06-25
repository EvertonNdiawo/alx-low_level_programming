#include <stdio.h>
#include <stdlib.h>

/**
 * main -entry point of code.
 *
 * Return: 0, success.
 */

int main(void)
{
	int a = 97;

	while (a != 123)
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
