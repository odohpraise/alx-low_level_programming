#include <stdio.h>
/**
 * main - code block entry
 * Description: prints sum of even-valued terms
 * Return: always 0
 */
int main(void)
{
	long first, second, next, sum;

	first = 1;
	second = 2;
	next = 3;
	sum;

	while (1)
	{
		first = second;
		second = next;
		next = first + second;
		if (next > 4000000)
			break;


		if ((next % 2) == 0)
			sum += next;
	}
	printf("%ld\n", sum);

	return (0);
}
