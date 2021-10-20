#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int fila, col;

	for (fila = 0; fila < 8; fila++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[fila][col]);
		}
		_putchar('\n');
	}
}

