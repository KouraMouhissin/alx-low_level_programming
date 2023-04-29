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
		printf("%d\n", (*h).n);
		h = (*h).next;

		nbr_nde++;
	}
	return (nbr_nde);
}
