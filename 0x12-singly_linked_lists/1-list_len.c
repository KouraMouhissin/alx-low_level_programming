#include "lists.h"
/**
 * list_len - number of nodes
 * @h: pointer to the first node
 * Return: nde_nbr
*/

size_t list_len(const list_t *h)
{
	size_t nde_nbr = 1;

	/* pointer test*/
	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		h = h->next;
		nde_nbr++;
	}
	return (nde_nbr);
}
