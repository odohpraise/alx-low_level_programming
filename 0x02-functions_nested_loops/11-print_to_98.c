#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - code block entry
 * @n : integer to be declared
 * Return: 0 always success
 */
void print_to_98(int n)
{
	int num;

	if (n < 98)
	{
		for (num = n; num <= 98; num++)
		{
			if (num != 98)
			{
				printf("%d, ", num);
			}
			else
			{
				printf("%d\n", num);
			}
		}
	}
	else
	{
		if (n > 98)
	{
		for (num = n; num >= 98; num--)
		{
			if (num != 98)
			{
				printf("%d, ", num);
			}
			else
			{
				printf("%d\n", num);
			}
		}
	}
	}
}
