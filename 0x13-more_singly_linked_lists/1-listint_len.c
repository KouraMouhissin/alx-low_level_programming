#include "lists.h"
/**
 * listint_len - for elements nbr in a list
 * @h: list head
 * Return: int
 */

size_t listint_len(const listint_t *h)
{
	size_t nbr_nde = 0;

	do {
		h = (*h).next;

		nbr_nde++;
	} while (h != NULL);

	return (nbr_nde);
}
