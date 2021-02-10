#include <stdio.h>
/**
 * main - code block entry
 * Description: Print all alphabet except q & e
 * with using putchar twice
 * Return:0
 */
int main(void)
{
	char lowercase = 'a'
		while (lowercase <= 'a')
		{
			if (lowercase  == 'q')
			{
				lowercase++;
			}
			else if (lowercase == 'e')
			{
				lowercase++;
			}
			else
			{
				putchar(lowercase)
				lowercase++;
			}
			putchar('\n');

			return (0);

}
