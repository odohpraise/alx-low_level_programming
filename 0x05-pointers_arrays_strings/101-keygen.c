#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -code block Entry
 *
 * Description: Generates Random Password
 *
 * Return: Success
 */
int main(void)
{
	int success, pass;

	srand(time(0));
	success = 2772;
	while (win >= 127)
	{
		pass = ((rand() % 126) + 1);
		printf("%c", pass);
		success -= pass;
	}
	printf("%c", success);
	return (0);
}
