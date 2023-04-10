#include "main.h"

/**
 ** _strcat - Entry point
 ** @dest: parameter one
 ** @src: parameter two
 ** Return: Always 0 (Success)
 **/

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
