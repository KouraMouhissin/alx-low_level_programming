#include "variadic_functions.h"
/**
 * print_strings - string printer
 * @separator: chaine à afficher entre les chaines
 * @n: nbr de chaine
 * Return: nothing void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	char *ch;
	unsigned int rec;

	va_start(lst, n);

	/*La boocle pour afficher*/

	for (rec = 0; rec < n; rec++)
	{
		ch = va_arg(valist, char *);

		if (ch)
			printf("%s", ch);
		else
			printf("(nil)");

		/*Condition sur le rec*/

		if (rec < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");

	va_end(lst);
}

