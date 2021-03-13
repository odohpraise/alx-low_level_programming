#include "holberton.h"
/**
 **leet - encodes a string into 1337
 *@str: the string to be modded
 *Return: the mod string
 */
char *leet(char *str)
{
	int i, j;
	char *lower = "aeotl";
	char *UC = "AEOTL";
	char *elite = "43071";

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; j <= 5; j++)
			if (str[i] == lower[j] || str[i] == UC[j])
				str[i] = elite[j];
	return (str);
}
