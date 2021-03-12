#include "holberton.h"

/**
 * _strcat - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer in which we copy the string to
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
		i++;
	}
	for (j = 0 ; src[j] != '\0' ; j++, ++i)
	{
		dest[i] = src[j];
	}
	dest[i] = 0;
	return (dest);

}
