#include "main.h"

/**
 * _islower: entry point of function.
 *
 * @c: passed as an argument in function to
 *
 * Description: checks for lowercase letters
 *
 * Return: Returns 1 when success and 0 when not
 */
int _islower(int c)
{
	if (c >= 97 &&  <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
