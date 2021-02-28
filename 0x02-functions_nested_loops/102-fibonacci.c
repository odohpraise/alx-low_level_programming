#include <stdio.h>
/**
 * main - code Block entry
 * Description: Print first 50 fibonacci numbers
 * Return: always 0
 */
int main(void)
{
	int firstTerm, secondTerm, nextTerm, num;

	firstTerm = 1;
	secondTerm = 2;
	nextTerm = 3;
	num = 0;
	printf("1, 2, ");
	while (num < 47)
	{
		printf("%d, ", nextTerm);
		firstTerm = secondTerm;
		secondTerm = nextTerm;
		nextTerm = firstTerm + secondTerm;
		num++;
	}
	printf("%d\n", nextTerm);

		return (0);
}
