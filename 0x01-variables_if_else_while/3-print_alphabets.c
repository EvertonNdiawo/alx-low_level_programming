#include <stdio.h>

/**
 * main - entry of the program
 *
 * Description: This program prints the alphabet in lowercase
 * and then in uppercase using the putchar method.
 *
 * Return: returns 0 (success)
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	char ALPHA[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;
	int j = 0;

	while (alpha[i] != '\0')
	{
		putchar(alpha[i]);
		i++;
	}

	while (ALPHA[j] != '\0')
	{
		putchar(ALPHA[j]);
		j++;
	}

	putchar('\n');

	return (0);

}
