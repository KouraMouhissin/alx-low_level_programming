#include "main.h"
/**
 * _puts - func name
 * @str: given string
 * Return: NULL.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
