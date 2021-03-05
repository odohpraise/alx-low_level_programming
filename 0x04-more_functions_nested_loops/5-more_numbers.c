#include "holberton.h"
/**
 * more_numbers -print 1-10 14 times
 * Description: prints number 1-10 14 times
 * Return: always succes 0
 */
void more_numbers(void)
{
	int num;
	int ntime;

	for (ntime = 0; ntime <=  9; ntime++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
				_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
