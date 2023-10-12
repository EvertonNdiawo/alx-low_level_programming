#include "main.h"

/**
 * print_last_digit - Prints last digit of a number.
 *
 * @l: numbert to be checked.
 * @x: variable to hold value.
 *
 * Return: returns value of the last digit.
 */
int print_last_digit(int l)
{
	int x;

	if (l < 0)
		l = -l;

	x = l % 10;

	if (x < 0)
		x = -x;


	_putchar(x + '0');

	return (x);

}
