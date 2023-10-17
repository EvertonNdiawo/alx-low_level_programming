#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line.
 *
 * @str: string to be split
 *
 * Return: returns nothing.
 */
void puts_half(char *str)
{
	int n, i;
	int length_of_string = 0;

	while (str[length_of_string] != '\0')
	{
		length_of_string++;
	}

	if (length_of_string % 2 == 0)
	{
		for (i = length_of_string / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (length_of_string % 2)
	{
		for (n = (length_of_string - 1) / 2; n < length_of_string; n++)
		{
			_putchar(str[n + 1]);
		}
	}

	_putchar('\n');
}
