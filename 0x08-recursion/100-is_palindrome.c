#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 *
 * @s: pointer to the string whose length is to be returned.
 *
 * Return: returns the length of a string.
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}

/**
 * palindrome_checker - compares a string to its reverse to
 * check whether it is a palindrome.
 *
 * @str: the string to compare.
 * @len: the length of the string as determined by the function
 * _strlen_recursion.
 * @count: a counter to help with accessing string elements from the end.
 *
 * Return: 1 if string is a palindrome, otherwise returns 0. Empty string is
 * treated as a palindrome.
 */

int palindrome_checker(char *str, int len, int count)
{

	if (count >= len/ 2)
	{
		return (1);
	}

	if (str[count] == str[len - count])
	{
		return (palindrome_checker(str, len, count + 1));
	}

	return (0);
}

/**
 * is_palindrome - Checks, through the help of the helper function
 * palindrome_checker, whether a string is a palindrome.
 *
 * @s: pointer to string to be checked.
 *
 * Return: 1 if s is palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
	{
		return (1);
	}

	return (palindrome_checker(s, len - 1, 0));
}
