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
	int i = 0;
	int count;

	while (s[count] != '\0')
	{
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		*s = s[i];
	}

}
