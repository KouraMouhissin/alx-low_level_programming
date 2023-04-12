#include "main.h"
#include <stdlib.h>
/**
 * str_concat - print a concat string 
 * @s1: given string 1
 * @s2: given string 2
 * Return: s1 followd by s2 
 */
char *str_concat(char *s1, char *s2)
{
	char *out;
        unsigned int i, j, k, fin;

        if (s1 == NULL)
                s1 = "";
	if (s2 == NULL)
		s2 = "";

        for (i = 0; s1[i] != '\0'; i++)
                ;
	for (j = 0; s2[i] != '\0'; j++)
		;

        out = malloc(sizeof(char) * (i + j + 1));

	if (out == NULL)
	{
		free(out);
		return (NULL);
	}

        for (k = 0; k < i; k++)
                out[k] = s1[k];

	fin = j;

	for (j = 0; j <= fin; k++, j++)
		out[k] = s2[j];

        return (out);	
}
