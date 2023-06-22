#include "functions.h"
/**
 * sum_them_all - sum of all parameters
 * @n: argv  size (aomount of args)
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list lst;
	unsigned int rec;

	int amnt = 0;

	/*Debut de l'utilisation des variatic*/

	if (n == 0)
		return (0);

	va_start(lst, n);


	for (rec = 0; rec < n; rec++)
		amnt += va_arg(lst, int);

	va_end(lst);

	return (amnt);
}
