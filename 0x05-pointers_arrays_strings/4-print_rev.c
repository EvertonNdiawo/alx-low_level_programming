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

	counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}


	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

}
