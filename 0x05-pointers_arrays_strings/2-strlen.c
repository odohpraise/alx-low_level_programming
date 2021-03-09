#include "holberton.h"
#include <stdio.h>
/**
 * _strlen - Checks the length ofstring
 * @s : Pointer to be checked
 * Return: Length
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while ((*(s + length)) != '\0')
	{
		length++;
	}

	return (length);
}
