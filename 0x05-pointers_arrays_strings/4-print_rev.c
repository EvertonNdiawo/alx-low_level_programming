#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: pointer to the string to be reversed
 *
 * Return: returns nothing.
 */
void print_rev(char *s)
{
	int counter;
	int i;

	while (*s != '\0')
	{
		counter++;
		s++;
	}

	i = counter;

	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

}
