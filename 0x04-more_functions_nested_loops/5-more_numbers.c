#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */
void more_numbers(void)
{
	int i, c;

	i = 0;
	while (i < 10)
	{
		for (c = 0; c < 15; c++)
		{
			if (c >= 10)
				putchar((c / 10) + 48);
			putchar((c % 10) + 48);
		}
		putchar('\n');
		i++;
	}
}
