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
	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
