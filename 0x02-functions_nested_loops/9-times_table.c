#include "holberton.h"
/**
 * times_table - code block entry
 * Description: Prints 9 times table starting with zero
 * Return: 0
 */
void times_table(void)
{


	int x, y, z;

	for (x = 0; x <= 9; x++)
	{

		for (y = 0; y <= 9; y++)
		{

			z = x * y;

			if (y != 0)
			{

				_putcha(',');
				_putchar(' ');
			}
			if (y == 0)
			{

				_putchar('0');
			}
			else if (z >= 10)
			{

				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');

			}
			else if ((z < 10) && (y != 0))
			{

				_putchar(' ');
				_putchar((z % 10) + '0');

			}

		}

		_putchar('\n');

	}


}
