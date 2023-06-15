#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - malloc_checked(unsigned int b)
 * @b: unsigned int
 * Return: 98 if mem = null and mem else
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (mem);
}
