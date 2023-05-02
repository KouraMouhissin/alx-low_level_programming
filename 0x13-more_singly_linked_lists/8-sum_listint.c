
#include "lists.h"
/**
 * sum_listint - sum calculator
 * @head: head
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int totl = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		totl += (*tmp).n;
		tmp = (*tmp).next;
	}
	return (totl);
}
