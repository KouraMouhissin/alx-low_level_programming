#include "main.h"
/**
 * print_chessboard - chessboard
 * @a: input pointer
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	unsigned int c, m = 0;

	for (c = 0; c < 64; c++)
	{
		if (c % 8 == 0 && c != 0)
		{
			m = c;
			putchar('\n');
		}
		putchar(a[c / 8][c - m]);
	}
	putchar('\n');
}
