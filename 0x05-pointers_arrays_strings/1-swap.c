#include "main.h"

/**
 ** swap_int- Entry point
 ** @a: parameter one
 ** @b: parameter two
 ** Return: Always 0 (Success)
 **/

void swap_int(int *a, int *b)
{
	int p, d;

	p = *a;
	d = *b;
	*b = p;
	*a = d;
}
