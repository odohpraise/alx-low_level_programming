#include "holberton.h"
/**
 * rev_string - reverse a string
 * @s: string to reverse
 * Return: 0
 */
void rev_string(char *s)
{
	int lent = 0, j = 0;

	char c;

	while (s[lent])

		lent++;

	for (j = 0; j < lent / 2; j++)

	{

		c = s[lent - j - 1];

		s[lent - j - 1] = s[j];

		s[j] = c;

	}

}
