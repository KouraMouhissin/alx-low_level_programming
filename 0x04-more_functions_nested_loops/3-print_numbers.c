#include "main.h"

/**
 ** print_numbers - Entry point
 ** Return: Always 0 (Success)
 **/

void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
