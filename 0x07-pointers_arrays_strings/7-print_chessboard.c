#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: string to be printed
 * Definition - prints chessboard
 * Return: void
*/

void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	int pawn;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			pawn = a[i][j];
			_putchar(pawn);
		}
		_putchar(10);
	}

}
