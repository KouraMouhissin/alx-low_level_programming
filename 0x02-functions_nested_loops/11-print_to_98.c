#include <stdio.h>
#include "main.h"

/**
 ** print_to_98 - Entry point
 ** @n: parameter
 ** Return: Always 0 (Success)
 **/

void print_to_98(int n)
{
	if (n > 99)
	{
	while (n > 99)
	{
		if (n == 98)
		{
		printf("%d", n);
		}
		else
		{
		printf("%d, ", n);
		}
		n--;
	}
	}
	else if (n < 99)
	{
	while (n < 99)
	{
		if (n == 98)
		{
		printf("%d", n);
		}
		else
		{
		printf("%d, ", n);
		}
		n++;
	}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
}
