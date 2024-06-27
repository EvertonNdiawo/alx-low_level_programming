#include <stdio.h>

/**
 * main - a program that prints two two-digit numbers.
 *
 * Return: 0, success.
 */

int main(void)
{
	int i = 48;
	int j;

	while (i < 57)
	{
		j = 48;
		
		while (j < 57)
		{
			putchar(i);
			putchar(j);
			putchar(' ');
			j++;
		}
		i++;
		putchar(',');
	}

	putchar('\n');
	return (0);
}
