#include "holberton.h"
/**
 * print_rev - print Reverse string
 * @s :string to be reversed
 * Return: string
 */
void print_rev(char *s)
{

	int i;


	for (i = 0 ; s[i] != '\0' ; i++)

	{

	}

	i--;

	while (i >= 0)

	{

		_putchar(s[i--]);

	}

	_putchar(10);
}
