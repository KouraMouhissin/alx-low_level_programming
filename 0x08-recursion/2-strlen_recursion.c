#include "main.h"
/**
 * _strlen_recursion - function to print string length
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
