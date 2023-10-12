#include "main.h"

/**
 * print_last_digit - Prints last digit of a number.
 *
 * @l: numbert to be checked.
 * @d: variable to hold final result.
 *
 * Return: returns value of the last digit.
 */
int print_last_digit(int l)
{
	l = (l < 0) ? -l : l;
	int d = l % 10;

	_putchar(d + '0');

	return (d);
	
}
