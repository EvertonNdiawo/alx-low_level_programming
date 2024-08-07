#include <stdlib.h>

/**
 * _putchar - Returns a single character to the standard output.
 *
 * @c: character to be written to the screen.
 *
 * Return: the character printed to the screen.
 */

int _putchar(int c)
{
	return((write(&1, c, 1)));
}
	
