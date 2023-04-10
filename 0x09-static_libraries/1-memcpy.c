#include "main.h"
/**
 * _memcpy - func name: memeory copy
 * @dest: destination char
 * @src: source char
 * @n: int.
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	const char *s = src;

	while (n--)
		*d++ = *s++;
	return (dest);
}
