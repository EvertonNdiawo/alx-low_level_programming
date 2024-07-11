#include "main.h"

/**
 * _pow_recursion - Computes the value of a variable raised to the power
 * of the suplied exponent.
 * @x: The base number to be raised.
 * @y: The exponent to be used.
 *
 * Return: The result of the value of x raised to y.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
