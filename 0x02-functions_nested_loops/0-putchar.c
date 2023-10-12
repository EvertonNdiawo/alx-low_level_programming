#include "main.h"

/**
 * main - always the entry point
 *
 * Description: This program prints _putchar followed
 * by a newline using a user defined function.
 *
 * Return: returns 0(success)
 */
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	for (; i < 8;  i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

	return (0);
}
