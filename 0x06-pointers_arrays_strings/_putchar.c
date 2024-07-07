#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints a char to the standard output.
 * @c: Character to print.
 *
 * Return: the character printed to the output.
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
