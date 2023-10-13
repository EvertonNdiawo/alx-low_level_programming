#include "main.h"

/**
 * _isupper - checks for uppercase character.
 *
 * @c: character to be checked.
 *
 * Return: retruns 1 if uppercase and 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
