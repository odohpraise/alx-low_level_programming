#include "holberton.h"
/**
 * print_alphabet_x10 - code entry point
 * Description: To print the alphabet 10 times and in lowercase
 * Return: 0 always successful
 */
void print_alphabet_x10(void)
{

	char count, alpha;


	for (count = 0; count < 10; count++)

	{

		for (alpha = 'a'; alpha <= 'z'; alpha++)

		{

			_putchar(alpha);
		}

		_putchar('\n');

	}
}
