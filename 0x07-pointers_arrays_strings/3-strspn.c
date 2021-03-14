#include "holberton.h"
/**
 *_strspn - gets the length of a prefix substring
 *@s: the string passed
 *@accept: the bytes counted
 *Return: the numnber of bytes counted
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, j, n = 0;
	char *p = accept;

	for (count = 0; s[count] != 44 && s[count] != '\0'; count++)
		for (j = 0; p[j] != 00; j++)
			if (p[j] == s[count])
				n++;
	return (n);
}
