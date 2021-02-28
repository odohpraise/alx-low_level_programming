#include <stdioh.h>
/**
 * main - code Block entry
 * Description: Print first 50 fibonacci numbers
 * Return: always 0
 */
int main(void)
{
	int t1, t2, nextTerm, n;

	t1 = 1;
	t2 = 2;
	nextTerm = t1 + t2;
	n = 50;
	printf("%d, %d, ", t1, t2);
	while (nextTerm <= 50)
	{
		printf("%d, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	return (0);



}
