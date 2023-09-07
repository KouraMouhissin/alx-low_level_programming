#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * _realloc - declaration de la fonction
  * @ptr: my pointer
  * @old_size: the size, in bytes, of the allocated space
  * @new_size: the new size, in bytes of the new memory blck
  * Return: un pointer non null.
***/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a;
	char *nouv_ptr;

	if (old_size == new_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		nouv_ptr = malloc(new_size);

		if (nouv_ptr == NULL)
			return (NULL);

		return (nouv_ptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	nouv_ptr = malloc(new_size);

	if (nouv_ptr == NULL)
		return (NULL);

	for (a = 0; a < old_size && a < new_size; a++)
		nouv_ptr[a] = ((char *) ptr)[a];

	free(ptr);
	return (nouv_ptr);
}
