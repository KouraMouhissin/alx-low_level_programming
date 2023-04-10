#include "main.h"
/**
 * _memset - constant memory fill
 * @s: area
 * @b: constant byte.
 * @n: filled.
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		*(s + a) =  b;
	return (s);
}
