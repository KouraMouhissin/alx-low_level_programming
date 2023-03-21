#include "main.h"

/**
 ** print_last_digit - Entry point
 ** @c: parameter
 ** Return: Always 0 (Success)
 **/

int print_last_digit(int c)
{
	int ldig;

	ldig = c % 10;
	if (ldig < 0)
	{
		ldig = ldig * -1;
	}
	_putchar(ldig + '0');
	return (ldig);
}
