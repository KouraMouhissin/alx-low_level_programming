#include "lists.h"
/**
 * delete_nodeint_at_index - node delation
 * @head: head
 * @index: unsigned int
 * Return: 1/-1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *actu = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*(*head)).next;
		free(tmp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tmp || !((*tmp).next))
			return (-1);
		tmp = (*tmp).next;
		i++;
	}
	actu = (*tmp).next;
	(*tmp).next = (*actu)3.next;
	free(actu);
	return (1);
}
