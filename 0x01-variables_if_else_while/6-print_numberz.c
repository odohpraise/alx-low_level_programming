#include <stdio.h>
/**
 * main - Code block entry
 * Description: Print sinle digit base starting from 0-10
 * Return:0
 */
int main(void)
{
	int base = '0';

	while (base <= '9')
	{
		putchar(base);
		base++;
	}
	putchar('\n');

	return (0);
}
