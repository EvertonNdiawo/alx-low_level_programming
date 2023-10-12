#include "main.h"

/**
 * _islower: entry point of function.
 *
 * @c: passed as an argument in function to
 *
 * Description: checks for lowercase letters
 *
 * Return: Returns 1 when success and 0 when not
 * successfull and 3 when the if conditional does not execute.
 */
int _islower(int c)
{
	if (int c >= 97 &&  <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (3);
}
