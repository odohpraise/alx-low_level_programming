#include "holberton.h"
/**
 * print_times_table - code block entry
 * @n : integer
 * Result: always 0
 */
void print_times_table(int n)
{
	int first, second, product;

	if (n >= 0 && n <= 15)
	{
		for (first = 0; first <= n; first++)
		{
			for (second = 0; second <= n; second++)
			{
				product = second * first;
				if (second == 0)
				{
					_putchar(product + '0');
				} else if (product < 10 && second != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				} else if (product >= 10 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				} else if (product >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((product / 100) + '0');
					_putchar(((product / 10) % 10) + '0');
					_putchar((product % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
