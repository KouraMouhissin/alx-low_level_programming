#include "main.h"
#include <stdlib.h>
/**
 * _memset - remp with cst byte
 * @s: given pointer
 * @b: given char
 * @n: given int
 * Return: A pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}

/**
 * _calloc - malloc allocation fonction
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
