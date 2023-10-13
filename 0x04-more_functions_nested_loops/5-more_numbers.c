#include "main.h"

/**
 * more_numbers - prints 0 t0 14 ten times,followed by a newline
 */
void more_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= 14; j++)
		{
			if (j >= 10)

				_putchar(j / 10 +  '0');


			_putchar(j % 10 + '0');
		}

		_putchar('\n');
	}
}
