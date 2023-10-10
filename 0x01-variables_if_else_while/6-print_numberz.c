#include <stdio.h>

/**
 * main - entry point of program
 *
 * Description: program prits all base 10 numbers between 0 and 10
 * using putchar function.
 *
 * Return: 0(success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 10 ; i++)
	{
		putchar('0' + i);
	}

	putchar('\n');

	return (0);

}
