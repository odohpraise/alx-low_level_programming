#include "holberton.h"
/**
 **_memset - fills memory with a constant byte
 *@s: the memory area pointed to
 *@b: the constant to be used for filling memory
 *@n: number of bytes in memory
 *Return: the memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		s[count] = b;
	return (s);
}
