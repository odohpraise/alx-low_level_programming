#include "holberton.h"
/**
 * puts2 - Prints all characters in a string that is divisable by 2
 * @str : String is stored
 * Return: always success
 */
void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}
		count++;
	}
	_putchar('\n');

}
