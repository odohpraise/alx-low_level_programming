#include "holberton.h"
/**
 * _strncat - Hello world
 * @dest: First variable
 * @src: second variable
 * @n: characters
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, j;

	for (length = 0 ; dest[length] != '\0' ; length++)
	{
	}
	for (j = 0 ; src[j] != '\0' ; j++, ++length)
	{
		if (j < n)
		{
			dest[length] = src[j];
		}
	}
	dest[length] = '\0';
	return (dest);
}
