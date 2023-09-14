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

	while (format[a] && format)
	{
		/*Initialisation l'indice b*/
		b = 0;
		while (vch_argt[b])
		{
			if (format[a] == vch_argt[b] && c)
			{
				printf(", ");
				break;
			}
			b++;
		}
		
		/*Un switch case pour cifs*/
		/*switch (format[a])
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
			}
			printf("%s", ch);
			break;
		}
		Increementation de l'indice a*/
		/*a++;*/

		/*Un switch case pour cifs*/
              
                if (format[a] == 'c')
		{
                        printf("%c", va_arg(vard_list, int)), c = 1;
                        break;
		}
		else if (format[a] == 'i')
		{
                        printf("%d", va_arg(vard_list, int)), c = 1;
                        break;
		}
		else if (format[a] == 'f')
		{
                        printf("%f", va_arg(vard_list, double)), c = 1;
                        break;
		}
		else if (format[a] == 's')
		{
                        ch = va_arg(vard_list, char *), c = 1;
                        if (!ch)
                        {
                                printf("(nil)");
                                break;
                        }
                        printf("%s", ch);
                        break;
                }

		a++;
	}
	printf("\n"), va_end(vard_list);
}
