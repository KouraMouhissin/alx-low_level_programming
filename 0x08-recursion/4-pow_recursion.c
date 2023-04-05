#include "main.h"
/**
 * _pow_recursion - func to print rised ind
 * @x: given number
 * @y: int to rised
 * Return: an int/ the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
