#include "holberton.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: numbers of time you want the line displayed
 * Return: Always success 0
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == i)
				_putchar(92);
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
