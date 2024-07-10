#include "main.h"
#include <unistd.h>

/**
 * _putchar - Prints a character to the standard output.
 * @c: Character to print.
 *
 * Return: Printed character
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
