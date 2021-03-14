#include "holberton.h"
/**
 *_strlen_recursion - return the lenght of a string
 *@s: string
 *Return: length of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 *check_pal - check if string is palindrome
 *@str1: string
 *@str2: string
 *Return: if str1 != str2 returns 0 if str1=str2 return 1,
 *else returns check
 */
int check_pal(char *str1, char *str2)
{
	if (*str1 != *str2)
	{
		return (0);
	}
	else if (str1 >= str2)
	{
		return (1);
	}
	return (check_pal(str1 + 1, str2 - 1));
}
/**
 *is_palindrome - check if is palindrome
 *@s: string
 *Return: 1 if pal 0 if not
 */
int is_palindrome(char *s)
{
	int i = _strlen_recursion(s);
	char *left = s;
	char *right = s + (i - 1);

	if (i == 0)
	{
		return (1);
	}
	return (check_pal(left, right));
}
