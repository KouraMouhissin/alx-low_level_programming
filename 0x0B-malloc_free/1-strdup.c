#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated spac
 * @str: given string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *out;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;

	out = (char *)malloc(sizeof(char) * (i + 1));

	if (out == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		out[j] = str[j];
	return (out);
}
