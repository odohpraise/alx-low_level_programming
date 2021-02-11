#include <stdio.h>
/**
 * main - codeblock entry
 * Description: Print double numbers in C from 00-99
 * Return:0
 */
int main(void)
{
	int  num = '0';

	while (num <= '99')
		num++;
{
	putchar((num / 10) + '0');

	putchar((num % 10) + '0');
}
	if (num < 99)
{
	putchar(',');
	putchar(' ');
{
	putchar('\n');

	return (0);

}
