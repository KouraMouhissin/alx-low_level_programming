#include "lists.h"
/**
 * print_list - print elements in a linked list
 * @h: pointer to first node (node 0)
 * Return: nodes numbers/ or 0 if pointer-> null
*/

size_t print_list(const list_t *h)
{
	size_t nde_nmbr = 1;

	/*pointer test*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		nde_nmbr += 1;
	}
	printf("[%d] %s\n",h->len,h->str);
	return (nde_nmbr);
}
