#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string followed by a new line to stdout.
 * @str: the string to be printed.
 *
 * Return: void, nothing.
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		puts(str[i]);
		i++;
	}
	_putchar('\n');
}
