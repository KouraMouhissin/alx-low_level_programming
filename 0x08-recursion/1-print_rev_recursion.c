#include "main.h"
/**
 * _print_rev_recursion - function to print reverse string
 * @s: given string
 * Return: the reverse string.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
