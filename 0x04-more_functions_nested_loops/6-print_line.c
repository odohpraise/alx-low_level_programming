#include "holberton.h"
/**
 * print_line - Prints  _ line
 * @n: value to be n of times character should be printed
 * Return: Always success
 */
void print_line(int n)
{
	int num;

	num = 0;
	while (num < n && n > num)
	{
		_putchar(95);

		num++;
	}
	_putchar('\n');
}
