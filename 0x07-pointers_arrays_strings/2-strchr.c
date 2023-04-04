#include "main.h"
/**
 * _strchr - func name: memeory copy
 * @s: given string
 * @c: char for location
 * Return: NULL.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
