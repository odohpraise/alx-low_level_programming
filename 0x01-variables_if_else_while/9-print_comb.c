#include <stdio.h>
/**
 * main - code Block entry
 * Description: Prints the possible combination of sinle digit
 * numbers
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);


}
