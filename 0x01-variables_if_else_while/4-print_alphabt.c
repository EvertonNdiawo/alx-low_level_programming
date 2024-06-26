#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry of program.
 *
 * Return: 0, success.
 */

int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	for (i = 0; i < 26; i++)
	{
		if (alph[i] != 'q' && alph[i] != 'e')
		{
			putchar(alph[i]);
		}
	}

	putchar('\n');
	return (0);
}
