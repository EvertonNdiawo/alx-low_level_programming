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
	int n;
	int length_of_string = 0;

	while (str[length_of_string] != '\0')
	{
		length_of_string++;
	}

	if ((length_of_string % 2) == 0)
	{
		n = length_of_string / 2;
	}
	else
	{
		n = (length_of_string - 1) / 2;
	}

	for (str[n] ; str[n] != '\0'; str[n]++)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}
