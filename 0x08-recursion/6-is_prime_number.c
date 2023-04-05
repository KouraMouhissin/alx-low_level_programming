#include "main.h"
/**
 * prime_test - test input for prime
 * @n: given number
 * @i: itr
 * Return: 1 or 0
 */
int prime_test(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + prime_test(n, i + 1));
}
/**
 * is_prime_number - test for prime number
 * @n: given number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime_test(n, 2));
}
