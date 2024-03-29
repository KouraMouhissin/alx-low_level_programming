#include "lists.h"
/**
 * free_listint - linked list frees
 * @head: head
 * return: nothing void function
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = (*head).next;
		free(head);
		head = tmp;
	}
}
