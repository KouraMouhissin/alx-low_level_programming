#include "main.h"
/**
 * factorial - func to print factorial of given int
 * @n: given int
 * Return: an int/ the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
