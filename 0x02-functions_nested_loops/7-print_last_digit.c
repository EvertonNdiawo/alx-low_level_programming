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
	l = l % 10;

	_putchar(l + '0');

	return (l);

}
