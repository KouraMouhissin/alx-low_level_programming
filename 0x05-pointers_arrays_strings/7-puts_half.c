#include "main.h"

/**
 ** puts_half - Entry point
 ** @str: parameter one
 ** Return: Always 0 (Success)
 **/

void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		;

	a++;
	for (a /= 2; str[a] != '\0'; a++)
	{
		putchar(str[a]);
	}
	putchar('\n');
}
