#include "main.h"

/**
 ** _strlen -  Entry point
 ** @s: parameter one
 ** Return: Always 0 (Success)
 **/

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
