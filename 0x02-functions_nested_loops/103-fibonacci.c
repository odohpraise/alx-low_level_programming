#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long first, second, next;
	float sum;

	first = 1;
	second = 2;

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
	printf("%.0f\n", sum);

	return (0);

}
