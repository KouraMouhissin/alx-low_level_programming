#include "main.h"

/**
 ** _abs - Entry point
 ** @c: parameter
 ** Return: Always 0 (Success)
 **/

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}

	return (0);
}
