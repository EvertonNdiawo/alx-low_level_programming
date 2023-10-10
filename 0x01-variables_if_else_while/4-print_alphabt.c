#include <stdio.h>

/**
 * main - program execution begins here
 *
 * Description: A program to print the alphabet in lowercase
 * using the putchar method and ignore the letters q and e
 * while printing.
 *
 * Return: returns 0 (success)
 */
int main(void)
{
	char myStr[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (myStr[i] != '\0')
	{
		if (myStr[i] != 'e' && myStr[i] != 'q')
		{
			putchar(myStr[i]);
		}

		i++;
	}

	putchar('\n');

	return (0);
}
