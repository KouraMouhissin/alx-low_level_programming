#include "lists.h"
/**
 * listint_len - for elements nbr in a list
 * @h: list head - tete
 * Return: an int
 */

size_t listint_len(const listint_t *h)
{
	size_t nmbr_nde = 0;

	while (h != NULL)
	{
		h = (*h).next;

		nmbr_nde++;
	}

	return (nmbr_nde);
}
