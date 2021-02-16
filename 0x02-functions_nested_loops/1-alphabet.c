#include "holberton.h"
/**
 * print_alphabet - code block entry
 * Description: Print alphabet lowercase
 * Return:0
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');

}
