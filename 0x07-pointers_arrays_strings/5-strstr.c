#include "holberton.h"
/**
 **_strstr - function that locates the first occurance of a sub string
 *@haystack: the string being searched
 *@needle: the string to be compared
 *Return: pointer to the begining of the substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int j;

	for (; *haystack != '\0'; haystack++)
	{
		for (j = 0; needle[j] == haystack[j]; j++)
			if (haystack[j] != needle[j])
				break;
		if (needle[j] == '\0')
			return (haystack);
	}
	return ('\0');
}
