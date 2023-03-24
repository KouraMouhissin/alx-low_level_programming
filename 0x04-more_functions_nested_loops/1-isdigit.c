#include "main.h"

/**
 ** _isdigit - Entry point
 ** @c: parameter
 ** Return: Always 0 (Success)
 **/

int _isdigit(int c)
{
	if (c >= 46 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
