#include<stdio.h>
/**
 * main -code block Entry
 * Description: A Program that  prints alphabet
 * in lower case followed by a new line
 * Return:0
 */

int main(void)
{

	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar ('\n');

	return (0);

}
