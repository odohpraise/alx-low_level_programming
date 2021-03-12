#include "holberton.h"
/**
 * _strncpy - cpoies a string of n char
 * @dest: the final string
 * @src: the string to copy from
 * @n: the number of char to copy
 * Return: the final output
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n && src[count] != '\0'; count++)
		dest[count] = src[count];
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
