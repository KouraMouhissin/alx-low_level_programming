#include "variadic_functions.h"
/**
 * print_all - a function for anything
 * @format: argument passed to a function
 * Return: void so no return ;)
 */
void print_all(const char * const format, ...)
{
	char *ch;
	va_list vard_list;
	unsigned int a = 0, b, c = 0;
	const char vch_argt[] = "cifs";

	va_start(vard_list, format);
	while (format && format[a])
	{
		b = 0;
		while (vch_argt[b])
		{
			if (format[a] == vch_argt[b] && c)
			{
				printf(", ");
				break;
			} b++;
		}
		switch (format[a])/*switch case pour format*/
		{
		case 'c':
			printf("%c", va_arg(vard_list, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(vard_list, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(vard_list, double)), c = 1;
			break;
		case 's':
			ch = va_arg(vard_list, char *), c = 1;
			if (!ch)
			{
				printf("(nil)");
				break;
			} printf("%s", ch);
			break;
		} a++;/*Incrtion indice a*/
	} printf("\n"), va_end(vard_list);
}
