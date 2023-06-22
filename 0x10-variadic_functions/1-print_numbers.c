#include "variadic_functions.h"
/**
 * print_numbers - nbrs printer
 * @separator: chaine à afficher entre les nbrs
 * @n: nbrs d'entier en args.
 * Return: nothing void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	unsigned int rec;

	va_start(lst, n);

	for (rec = 0; rec < n; rec++)
	{
		/*Boocle pour laffichage ds nbres*/
		printf("%d", va_arg(lst, int));
		if (separator && rec < n-1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(lst);
}

