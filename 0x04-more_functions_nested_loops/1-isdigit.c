#include "holberton.h"
#include <stdio.h>
/**
 * _isdigit - checks if c is digit
 * @c : value to be checked
 * Return: 1 if c is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
