#include "lists.h"
/**
 * print_listint - prints elements
 * @h: list head
 * Return: int
 */

size_t print_listint(const listint_t *h)
{
	size_t nbr_nde = 0;

	while (h != NULL)
	{
		int a, b, c, d;

		a = (*h).n;

		if (a < 10)
		{
			putchar(48 + (*h).n);
			putchar('\n');
		}
		else if (a > 10 && a < 100)
		{
			b = a % 10;
			c = a - b;
			d = c / 10;
			putchar(48 + d);
			putchar(48 + b);
			putchar('\n');
		}

		return (1 +  print_listint((*h).next));
	}

	return (nbr_nde);
}

