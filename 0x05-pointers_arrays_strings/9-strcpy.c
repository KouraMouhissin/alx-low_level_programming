#include "main.h"

/**
 ** _strcpy- Entry point
 ** @dest: parameter one
 ** @src: parameter two
 ** Return: Always 0 (Success)
 **/

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
