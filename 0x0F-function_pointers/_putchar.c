#include <unistd.h>

/**
 * _putchar - prints a character to standard output
 *
 * @c: character to print
 *
 * Return: the character passed.
 */

int _putchar(char c)
{
	write(1, &c, 1);
}
