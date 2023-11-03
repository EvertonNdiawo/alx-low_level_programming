#include <unistd.h>

/**
 * _putchar - Prints a character to standard output
 *
 * @c: character to be printed
 *
 * Return: 0(success)
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}
