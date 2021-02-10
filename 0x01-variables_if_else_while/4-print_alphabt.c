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
		while (lowercase <= 'z')

			if (lowercase != 'e' && lowercase != 'r')
				continue;

			putchar(lowercase);
			lowercase++;
			putchar('\n');

			return (0);

}
