#include "main.h"

/**
 * _strspn - for prefix length of sub-str.
 * @s: segment
 * @accept: bytes
 * Return: accepted byte the number.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, bool;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		bool = 1;
		for (b = 0; *(accept + b) != '\0'; j++)
		{
			if (*(s + a) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (a);
}
