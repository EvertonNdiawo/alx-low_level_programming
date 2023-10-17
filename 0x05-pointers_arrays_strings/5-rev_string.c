#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string argument/parameter to be reversed
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int count = 0;
	int i, j;
	char hold;

	while (s[count] != '\0')
	{
		count++;

	}

	for (i = 0, j = count - 1; i < j; i++, j--)
	{
		hold = s[i];
		s[i] = s[j];
		s[j] = hold;
	}

}
