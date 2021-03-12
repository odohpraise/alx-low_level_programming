#include "holberton.h"
/**
 * puts_half - prints half the string
 * @str: is a string we are working on
 * Return: returns 0
 */

void puts_half(char *str)
{
	int length = 0;
	int half;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (half = length / 2; half < length; half++)
			_putchar(str[half]);
	_putchar('\n');
	}
	else
	{
		for (half = (length / 2) + 1; half < length; half++)
			_putchar(str[half]);
	}
	_putchar('\n');
}
