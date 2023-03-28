#include "main.h"

/**
 ** print_array - Entry point
 ** @a: parameter one
 ** @n: parameter two
 ** Return: Always 0 (Success)
 **/

void print_array(int *a, int n)
{
	int c = 0;

	for (; c < n; c++)
	{
		printf("%d", *(a + c));
		if (c != (n - 1))
			printf(", ");
	}
	printf("\n");
}
