#include <stddef.h>
/**
 * array_iterator - function
 * @array: array
 * @size: size
 * @action: pointer
 * Return: Empty/NULL
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
