#include "main.h"
/**
 * pw - function for the power
 * @n: given number
 * @i: iterated int
 * Return: an int
 */
int pw(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (0 + pw(n, i + 1));
}
/**
 * _sqrt_recursion - natural square root
 * @n: given number
 * Return: an int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (pw(n, 2));
}
