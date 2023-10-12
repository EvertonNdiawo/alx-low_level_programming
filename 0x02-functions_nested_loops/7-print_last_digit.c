#include "main.h"

/**
 * print_last_digit - Prints last digit of a number.
 *
 * @l: numbert to be checked.
 *
 * Return: returns value of the last digit.
 */
int print_last_digit(int l)
{
	l = _abs(l);
	l %= 10;

	return (l);
}
