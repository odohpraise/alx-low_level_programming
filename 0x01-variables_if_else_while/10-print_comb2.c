#include <stdio.h>
/**
 * main - codeblock entry
 * Description: Print double numbers in C from 00-99
 * Return:0
 */
int main(void)
{
	int  num = '00';

	while (num <= '99')
	{
		putchar(num);
		num++;
	}

	if (num < 99)
{
	putchar(',');
	putchar(' ');
}
	putchar('\n');

	return (0);

}
