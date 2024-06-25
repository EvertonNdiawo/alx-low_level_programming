#include <stdio.h>
#include <stdlib.h>
/**
 * main -start of execution.
 *
 * Return: 0 (success)
 */

int main(void)
{
	int A = 65;
	int a = 97;

	while (a != 123)
	{
		putchar(a);
		a++;
	}

	while (A != 91)
	{
		putchar(A);
		A++;
	}

	putchar('\n');

	return (0);
}
