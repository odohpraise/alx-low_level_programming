#include <stdio.h>
/**
 * main - code Block entry
 * Description: Print first 50 fibonacci numbers
 * Return: always 0
 */
int main(void)
{
	int i, n, t1, t2, nextTerm;

	i = 0;
	nexttTerm = 3;
	t1 = 1;
	t2 = 2;
	printf("1, 2, ");
	while (i < 47)
	{
		printf("%d, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
		i++;
	}
	printf("%d\n", nextTerm);

	return (0);
}
