#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 *
 * @c: passed as argument in the function.
 *
 * Return: Returns 0(failure), 1(success) and
 * 3(in case for some reason conditional is bypassed)
 */
int _isalpha(int c)
{
	if ((c >=97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (3);
}
