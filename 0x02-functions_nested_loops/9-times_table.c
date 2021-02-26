#include "holberton.h"
/**
 * times_table - code block entry
 * Description: Prints 9 times table starting with zero
 * Return: 0
 */
void times_table(void)
{
	int first, second, product;

	for (first = 0; first <= 9; first++)
	{
		for (second = 0; second <= 9; second++)
		{
			product = second * first;

				if (second == 0)
				{
					_putchar(product + '0');
				}
			if (product < 10 && second != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
					}
			else if (product >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
	}
			_putchar('\n');
	}
}
