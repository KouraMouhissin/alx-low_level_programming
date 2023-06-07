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

/**
 * is_palindrome_rec - function to check if a given string is
 * a palindrome.
 * @s: given string
 * @a: first char
 * @b: last char
 * Return: 0 or 1
 */
int is_palindrome_rec(char *s, int a, int b)
{
	/**
	 * If first char = to last char => s is a palindrome
	 */
	if (a == b)
		return (1);

	/**
	 * If first and last char don't match
	 */
	if (s[a] != s[b])
		return (0);

	/**
	 * If more than 2 char check if substring is also palindr
	 */
	if (a < b + 1)
		return (is_palindrome_rec(s, a + 1, b - 1));

	return (1);
}

/**
 * is_palindrome - function to check if a given string is
 * a palindrome.
 * @s: given string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	/**
	 * Empty string so palindrome
	 */
	if (n == 0)
		return (1);

	return (is_palindrome_rec(s, 0, n - 1));
}
