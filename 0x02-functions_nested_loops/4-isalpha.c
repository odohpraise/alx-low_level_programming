#include "holberton.h"
/**
 * _isalpha  -check if letter is lowercase or uppercase
 * @c: is a single letter
 * Return:1 if c is a letter and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);
	else
		return (0);

}
