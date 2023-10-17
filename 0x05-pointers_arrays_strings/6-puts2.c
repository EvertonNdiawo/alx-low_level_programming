#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character,
 * followed by a new line.
 *
 * @str: the string argument passed to the function,
 * the string to be printed.
 *
 * Return: returns nothing.
 */
void puts2(char *str)
{
	int i;
	int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}

	for (i = 0; i < count; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
