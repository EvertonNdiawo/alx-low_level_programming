#include<unistd.h>
#include<string.h>

/**
 * main - entry point of code
 *
 * Return: 1 always a success.
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int length = strlen(str);

	write(2, str, length);

	return (1);
}
