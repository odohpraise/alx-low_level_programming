#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints the array of n lements
 * @n: is the length of the string
 * @a: is the array
 * Return: 0
 */

void print_array(int *a, int n)
{

	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
