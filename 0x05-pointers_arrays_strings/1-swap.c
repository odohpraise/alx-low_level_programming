#include "holberton.h"
#include <stdio.h>
/**
 * swap_int -Swaps the value of two integer in a pointer
 * @a: pointer to a
 * @b : pointer to b
 * Return: Always success
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
