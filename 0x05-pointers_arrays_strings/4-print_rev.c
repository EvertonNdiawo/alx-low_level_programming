#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: strig to print
 *
 * Return: nothing, void.
 */

void print_rev(char *s)
{
	int length;
	int i;

	i = 0;
	length = 0;
	while (s[i] != '\0')
	{
		length += 1;
		i++;
	}
	for (length -= 1; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
