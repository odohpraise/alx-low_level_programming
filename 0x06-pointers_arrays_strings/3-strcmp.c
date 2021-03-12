#include "holberton.h"
/**
 * _strcmp - compare 2 strings
 * @s1: first string
 * @s2: second to compare
 * Return: int
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; i < s1[i] && s2[i] != '\0' ; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
