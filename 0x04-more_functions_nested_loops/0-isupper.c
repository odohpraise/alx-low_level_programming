#include "holberton.h"
#include <stdio.h>
/**
 *  _isupper - checks for uppercase
 * @c: character to be checked
 * Return: 1 if c is uppercase or 0
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
