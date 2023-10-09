#include <stdio.h>

/**
 * main - program starting point
 *
 * Description: This program prints the alphabet in lowercase,
 * followed by a newline using the putchar method.
 *
 * Return: Return 0 (success)
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (alpha[i] != '\0')
	{
		putchar(alpha[i]);
		i++;
	}

	putchar('\n');
}
