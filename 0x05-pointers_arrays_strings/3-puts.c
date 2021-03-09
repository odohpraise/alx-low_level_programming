#include "holberton.h"
/**
 * _puts - print text
 *
 * @str: This is my code block
 *
 */
void _puts(char *str)
{

	int count;

	for (count = 0; str[count] != '\0'; count++)

	{

		_putchar(str[count]);

	}

	_putchar('\n');

}
