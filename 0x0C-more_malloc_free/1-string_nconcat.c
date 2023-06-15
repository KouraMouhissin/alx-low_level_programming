#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - fonction
 * @s1: first one
 * @s2: second one
 * @n: given int
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, a, b;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = l2 = 0;
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;

	if (n >= l2)
		n = l2;

	str = (char *) malloc((l1 + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
		str[a] = s1[a];
	for (b = 0; b < n && s2[b] != '\0'; b++)
	{
		str[a] = s2[b];
		a++;
	}
	str[a] = '\0';
	return (str);
}
