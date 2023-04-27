#include "lists.h"
/**
 * list_len - number of nodes
 * @h: pointer to the first node
 * Return: nodes nbr
*/

size_t list_len(const list_t *h)
{
	size_t node_nbr = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		h = h->next;
		node_nbr++;
	}

	return (node_nbr);
}
