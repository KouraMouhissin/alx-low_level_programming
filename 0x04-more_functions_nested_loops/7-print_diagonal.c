#include "main.h"

/**
 ** print_diagonal -ne  Entry point
 ** @n : parametr
 ** Return: Always 0 (Success)
 **/

void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			putchar(' ');
		}
		putchar(92);
		if (a < (n - 1))
			putchar('\n');
	}
	putchar('\n');
}
