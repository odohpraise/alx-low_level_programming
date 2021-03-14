#include "holberton.h"
/**
 *carre - find the square root
 *@n: integer
 *@i: integer
 *Return: n if i*i=n, -1 if i*i>n else returns sqrt(n, i+1)
 */
int carre(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (carre(n, i + 1));
}
/**
 *_sqrt_recursion - find the square root of n
 *@n: integer
 *Return: sqrt(n,0)
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	return (carre(n, 0));
}
