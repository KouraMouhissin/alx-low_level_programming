#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of the two diagonals
 * @a: input
 * @size: matrix size
 * Return: no return.
 */
void print_diagsums(int *a, int size)
{
	int c, sumA = 0, sumB = 0;

	for (c = 0; c < (size * size); c++)
	{
		if (c % (size + 1) == 0)
			sumA += *(a + c);
		if (c % (size - 1) == 0 && c != 0 && c < size * size - 1)
			sumB += *(a + c);
	}
	printf("%d, %d\n", sumA, sumB);
}

