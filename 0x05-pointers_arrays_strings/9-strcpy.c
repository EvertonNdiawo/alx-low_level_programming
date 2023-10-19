#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to buffer pointed to by dest.
 *
 * @src: pointer to a string to be copied.
 * @dest: pointer to buffer where string is to be copies.
 *
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	*dest = *src;

	return (dest);
}
