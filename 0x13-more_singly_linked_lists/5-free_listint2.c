#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: a pointer to the list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*(*head)).next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
