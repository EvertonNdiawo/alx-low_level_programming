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
	int i;
	int length_of_string = 0;

	while (str[length_of_string] != '\0')
	{
		length_of_string++;
	}

	for (i = length_of_string / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
