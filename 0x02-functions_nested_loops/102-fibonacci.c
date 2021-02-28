 #include <stdio.h>
/**
 * main - code Block entry
 * Description: Print first 50 fibonacci numbers
 * Return: always 0
 */
int main(void)
{
	int n, t1 = 1, t2 = 2, nextTerm;

	if (n == 50)
	{
		for (i = 1; 1 <= 50; i++)
		{
			printf("%d, ", t1);
			nextTerm = t1 + t2;
			t1 = t2;
			t2 = nextTerm;
		}
	}
}
