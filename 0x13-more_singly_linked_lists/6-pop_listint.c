#include "lists.h"
/**
 * pop_listint - deletes
 * @head: a pointer to...
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (!head || !*head)
		return (0);

	i = (*(*head)).n;
	tmp = (*(*head)).next;

	free(*head);
	*head = tmp;
	return (i);
}
