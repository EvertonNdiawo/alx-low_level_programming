#include <stdio.h>

/**
 * main -entry of program
 *
 * Description: The program prints the alphabets in reverse
 * using the putchar function and then adds a new line at
 * the end.
 *
 * Return: returns 0 (success)
 */
int main(void)
{
	int i;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 25; i >= 0; i--)
	{
		putchar(alpha[i]);
	}

	putchar('\n');

	return (0);
}
