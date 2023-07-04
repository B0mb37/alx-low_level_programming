#include "main.h"

/**
 * print_chessboard - func that prints a chessborad
 * @a: array passed into func above
 * Return: Always 0 (success)
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
