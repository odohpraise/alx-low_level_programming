#include <stdio.h>
/**
 * main - code block entry
 * Description: Prints largest prime factor
 * Return: always 0
 */
int main(void)
{
	int i;
	long int maxFact, n;

	i = 2;
	n = 612852475143;
	maxFact = 0;

	for (i = 3; i <= n; i += 2)
	{
		while (n % i == 0)
		{
			n = n / i;
			maxFact = i;
		}

	}
	printf("%ld\n", maxFact);
	return (0);
}
