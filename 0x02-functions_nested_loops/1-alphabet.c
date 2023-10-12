#include "main.h"

/**
 * print_alphabet - where everyting happens
 *
 * Description: Prints the alphabet in lowercase using _putchar()
 *
 * Return: returns nothing since it is void.
 */
void print_alphabet(void)
{
	int ascii = 97

	while (ascii != 122)
	{
		char a = ascii;
		_putchar(a);
		ascii++;
	}

	_putchar('\n');
}
