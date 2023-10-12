#include "main.h"

/**
 * print_sign - checks the sign of a number
 *
 * @n: the integer to be checked
 *
 * Return: returns 1 for positive int, 0 for zero
 * and -1 for negative int.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
