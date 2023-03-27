#include "main.h"

/**
 ** _puts - Entry point
 ** @str: parameter one
 ** Return: Always 0 (Success)
 **/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
