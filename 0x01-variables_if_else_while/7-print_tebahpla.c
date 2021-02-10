#include <stdio.h>
/**
 * main - code block entry
 * Description: Print the inverse of alphabeth
 * Return:0
 */
int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

	return (0);




}
