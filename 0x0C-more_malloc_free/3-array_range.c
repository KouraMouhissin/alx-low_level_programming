#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min
 * @max: max
 * Return: pointer address
 */

int *array_range(int min, int max)
{
	int a, *array;

	if (min > max)
		return (NULL);
	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (a = 0; min <= max; a++)
	{
		array[a] = min;
		min++;
	}
	return (array);
}
