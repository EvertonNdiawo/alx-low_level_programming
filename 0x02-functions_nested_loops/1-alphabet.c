#include "main.h"

/**
 * print_alphabet - where everyting happens
 *
 * Description: Prints the alphabet in lowercase using _putchar()
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	int ascii = 97;
	char a = ascii;

	while (ascii != 122)
	{
		_putchar(a);
		ascii++;
	}

	_putchar('\n');

	return (0);
}
