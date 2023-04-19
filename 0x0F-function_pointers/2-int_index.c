#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - function
 * @array: pointer
 * @size: array siz
 * @cmp: pointer
 * Return: 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	bool a;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}

		for (i = 0; i < size; i++)
		{
			a = cmp(array[i]);
			if (a == TRUE)
				return (i);
		}
	}
	return (-1);
}
