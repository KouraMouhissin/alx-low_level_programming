#include "main.h"
/**
 * binary_to_uint - binary to decimal number unsigned int
 * @b: for binary
 * Return: decimal numb
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ent;
	int l, b_two;

	ent = 0;

	for (l = 0; b[l] != '\0'; l++)
		;

	for (l--, b_two = 1; l >= 0; l--, b_two *= 2)
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);

		if (b[l] & 1)
			ent += b_two;
	}

	if (!b)
		return (0);

	return (ent);

}
