#include "main.h"

/**
 ** print_most_numbers - Entry point
 ** Return: Always 0 (Success)
 **/

void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c == 50 || c == 52)
		{
		}
		else
		{
		putchar(c);
		}
	}
	putchar('\n');
}
