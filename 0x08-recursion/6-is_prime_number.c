#include "holberton.h"
/**
 *checker - check for prime number
 *@n: integer
 *@i: integer
 *Return: returns 1 if n is a primNum (n=i), returns 0 if not (n%i=0)
 */
int checker(int n, int i)
{
	if (n == i)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	return (checker(n, i + 1));

}
/**
 *is_prime_number - check for prime number
 *@n: integer
 *Return: checker(n, 2)
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (checker(n, 2));
}
