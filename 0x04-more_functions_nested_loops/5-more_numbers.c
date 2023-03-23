#include "main.h"

/**
 ** more_numbers - Entry point
 ** Return: Always 0 (Success)
 **/

void more_numbers(void)
{
	int c, i;

	i = 0;
	while (i < 10)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				int a, b;

				a = c % 10;
				b = c - a;
				b = b / 10;
				putchar(b + '0');
				putchar(a + '0');
			}
			else
			{
				putchar(c + '0');
			}
		}
		putchar('\n');
		i++;
	}
}
