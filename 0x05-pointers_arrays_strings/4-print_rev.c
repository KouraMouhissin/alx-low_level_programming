#include "main.h"

/**
 ** print_rev - Entry point
 ** @s: parameter one
 ** Return: Always 0 (Success)
 **/

void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
		break;
	count++;
	}
	for (count--; count >= 0; count--)
		putchar(s[count]);
	putchar('\n');
}
