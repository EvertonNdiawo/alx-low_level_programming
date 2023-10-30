#include <unistd.h>

/**
 * _putchar - prints a character to standard output
 *
 * @c: character to be printed
 *
 * Return: returns 1 on success, -1 on error.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
