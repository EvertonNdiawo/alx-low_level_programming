#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @n: value to be checked
 * Return: Returns absolute value of an int.
 *
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
