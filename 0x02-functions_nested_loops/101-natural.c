#include <stdio.h>
/**
 * main - code block entry
 * Description: Prints the sum of multiples of 3 or 5 below 1024
 * Return: always 0
 */
int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0)
		{
			sum += i;
		}
		else if (i % 5 == 0)
		{
			sum += i;
		}
	printf("%d\n", sum);

	return (0);

}
