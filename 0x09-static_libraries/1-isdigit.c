#include "main.h"

/**
 * _isdigit - chechks for a digit
 *
 * @c: integer to be checked
 *
 * Return: returns 1 if a digit, returns 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
