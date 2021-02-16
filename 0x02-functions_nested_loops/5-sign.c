#include "holberton.h"
/**
 * print_sign - code block entry
 * @n: is a Number
 * Return: Returns 1 and prints + if n isgreater than 0
 * prints 0 returns 0 if n is 0,returns -1 and prints -
 * if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
