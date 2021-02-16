#include "holberton.h"
/**
 * _islower - code Block entry
 * @c: is a single character
 * Return: 1 if lowercase ,0 otherwise
 */
int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);
	else
		return (0);

}
