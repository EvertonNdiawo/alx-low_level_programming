#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times.
 *
 *
 *
 * Return: returns nothing since it is void.
 */
void print_alphabet_x10(void)
{
	int ascii = 97;
	int i = 1;

	while (i < 11)
	{

		while (ascii != 123)
	       	{
		       	char a = ascii;

			_putchar(a);
			ascii++;
		}
	}

	_putchar('\n');
}
