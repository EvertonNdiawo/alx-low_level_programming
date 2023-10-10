#include <stdio.h>

/**
 * main -starting point of this program
 *
 * Description: This program prints all single digit numbers of
 * base 10 starting from 0 followed by a newline.
 *
 * Return: returns 0 (success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}

	printf("\n");

	return (0);
}
