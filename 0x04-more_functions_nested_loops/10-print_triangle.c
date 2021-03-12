#include "holberton.h"
/**
 * print_triangle - a function that prints triangle
 * @size: numbers of time you want the line displayed
 * Return: Always success 0
 */
void print_triangle(int size)
{
	int row, col, i, j, j2;

	row = size;
	col = size - 1;
	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 1; i <= row ; i++)
		{
			for (j = 1 ; j <= col ; j++)
			{
				_putchar(32);
			}
			col--;
			for (j2 = 1 ; j2 <= i ; j2++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
