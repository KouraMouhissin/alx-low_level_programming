#include "main.h"

/**
 ** print_square -ne  Entry point
 ** @size : parametr
 ** Return: Always 0 (Success)
 **/

void print_square(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			putchar('#');
		}
		putchar('\n');
	}
	if (size <= 0)
		putchar('\n');
}
