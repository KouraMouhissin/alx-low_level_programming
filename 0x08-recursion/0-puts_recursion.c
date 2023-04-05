#include "main.h"
/**
 * _puts_recursion - func to print string
 * @s: given string
 * Return: the string.
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i])
	{
		putchar(s[i]);
		i++;
	}
	putchar('\n');
}
