#include <stdio.h>
/**
 * main - code entry Block
 * Description: print alphabeth in lowercase
 * also print uppercase followed by line
 * Return:0
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	putchar('\n');

	return (0);




}
