#include "holberton.h"
/**
 **rot13 - function that encodes a string using rot13
 *@str: the string being passed
 *Return: the modded string
 */
char *rot13(char *str)
{
	int i, j;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = rot[j];
				break;
			}

		}
	}
	return (str);
}
