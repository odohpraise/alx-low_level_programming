#include "holberton.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: numbers of time you want the line displayed
 * Return: Always success 0
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);

			_putchar('\n');
		}
	}
}
