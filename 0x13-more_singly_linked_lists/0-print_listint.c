#include "lists.h"
/**
 * print_listint - prints elements
 * @h: list head
 * Return: int
 */

size_t print_listint(const listint_t *h)
{
	size_t nbr_nde = 0;

	do
	{
		printf("%d\n", h->n);
		h = (*h).next;

		nbr_nde++;
	} while (h != NULL);
	return (nbr_nde);
}
