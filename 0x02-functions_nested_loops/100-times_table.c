#include <stdio.h>
#include "main.h"


/**
 ** print_times_table - Entry point
 ** @f : parameter
 ** Return: Always 0 (Success)
 **/

void print_times_table(int f)
{
	if (f < 0 || f > 15)
	{
	}
	else
	{
	int a, b, c, d, e;

	for (a = 0; a <= f; a++)
	{
	for (b = 0; b <= f; b++)
	{
	c = a * b;
	if (c > 9)
	{
	d = c % 10;
	e = (c - d) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(e + '0');
	_putchar(d + '0');
	}
	else
	{
	if (b != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(c + '0');
	}
	}
	_putchar('\n');
	}
	}
}
