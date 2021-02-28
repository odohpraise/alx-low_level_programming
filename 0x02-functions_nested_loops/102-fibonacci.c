#include <stdioh.h>
/**
 * main - code Block entry
 * Description: Print first 50 fibonacci numbers
 * Return: always 0
 */
int main(void)
{
	int i, n = 50, t1 = 1, t2 = 2, nextTerm;

	for (i = 1; i <= n; ++1)
	{
		printf("d, ", nextTerm);
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	printf("%d\n", nextTerm);
	return (0);



}
