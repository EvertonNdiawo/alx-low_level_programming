#include <stdio.h>

/**
 * main - a program that prints combination of three digits without repetition.
 *
 * Return: 0, success.
 */

int main(void)
{
	int i = 48;
	int j;
	int k;

	while (i <= 57)
	{
		j = i + 1;
		while (j <= 57)
		{
			k = j + 1;
			while (k <= 57)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (i != 55 || j != 56 || k != 57)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
