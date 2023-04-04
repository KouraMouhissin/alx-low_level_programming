#include "main.h"
/**
 * _strstr - the first occurr
 * @haystack: string
 * @needle: sub-string
 * Return: beginning of located substring
*/
char *_strstr(char *haystack, char *needle)
{
	char *phaystack;
	char *qneedle;

	while (*haystack != '\0')
	{
		phaystack = haystack;
		qneedle = needle;

		while (*haystack != '\0' && *qneedle != '\0' && *haystack == *qneedle)
		{
			haystack++;
			qneedle++;
		}
		if (!*qneedle)
			return (phaystack);
		haystack = phaystack + 1;
	}
	return (0);
}
