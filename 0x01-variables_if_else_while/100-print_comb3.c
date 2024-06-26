#include <stdio.h>

/**
 * main - entry point of code.
 *
 * Return: 0, success.
 */

int main(void)
{
	int i = 48;
	int j;

	while (i <= 57)
	{
		j = 48;

		while (j <= 57)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);

				if (!(i == 56 && j == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
