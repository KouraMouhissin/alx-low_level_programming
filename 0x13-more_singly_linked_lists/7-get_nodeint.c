#include "lists.h"
/**
 * get_nodeint_at_index - get node int 
 * @head: head
 * @index: unsigned int
 * Return: address/NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *tmp = head;

	while (tmp && n < index)
	{
		tmp = (*tmp).next;
		n = n + 1;
	}

	return (tmp ? tmp : NULL);
}
