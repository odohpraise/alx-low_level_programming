#include "holberton.h"
/**
 *print_chessboard - function that prints the chessboard
 *@a: the array containing the chess board
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
	int len, j;

	for (len = 0; len < 8; len++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[len][j]);
		_putchar('\n');
	}
}
