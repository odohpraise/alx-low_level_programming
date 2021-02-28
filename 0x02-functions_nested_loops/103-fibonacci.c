#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	long first, second, next, sum;

	first = 1;
	second = 2;
	next = 3;

	while (1)
	{
		next = first + second;
		if  (next > 4000000)
			break;

		if ((next % 2) == 0)
			sum += next;

		first = second;
		second = next;
	}
	printf("%ld\n", next);

	return (0);

}
