#include "main.h"
/**
 * _strlen_recursion(char *s) - func to print rev string
 * @s: given string
 * Return: an int/ the string lenght
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
