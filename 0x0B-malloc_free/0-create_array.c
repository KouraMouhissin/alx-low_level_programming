#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates chars array
 * @size: array size
 * @c: char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(c) * size);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}

	return (ar);
}
