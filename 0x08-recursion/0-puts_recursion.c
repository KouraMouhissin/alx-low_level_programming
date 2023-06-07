#include "main.h"
/**
 * _puts_recursion - function to print string recurcivly
 * @s: given string
 * Return: our string by putchar if *s is not null else nl
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
