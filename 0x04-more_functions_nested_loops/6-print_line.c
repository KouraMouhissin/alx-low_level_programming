#include "main.h"

/**
 ** print_line -ne  Entry point
 ** @n : parametr
 ** Return: Always 0 (Success)
 **/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar(95);
	}
	putchar('\n');
}
