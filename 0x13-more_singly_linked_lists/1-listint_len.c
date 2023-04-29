#include "lists.h"
/**
 * listint_len - for elements nbr in a list
 * @h: list head
 * Return: int
 */

size_t listint_len(const listint_t *h)
{
	size_t nbr_nde = 0;

	while (h != NULL)
	{
		h = (*h).next;

		nbr_nde++;
	}

	return (nbr_nde);
}
