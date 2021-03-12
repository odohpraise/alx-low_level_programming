#include "holberton.h"
/**
 * puts_half - prints half the string
 * @str: is a string we are working on
 * Return: returns 0
 */

void puts_half(char *str)
{
	int length = 0;
	int half, n;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (half = length / 2; str[half] != '\0'; half++)
		{
			_putchar(str[half]);
		}
	}
	else if (length % 2)
	{
		for (n = (length - 1) / 2 ; n < length - 1; n++)
			_putchar(str[n + 1]);
	}
	_putchar('\n');
}
