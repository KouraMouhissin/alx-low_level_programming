#include "lists.h"
/**
 * reverse_listint - reverses
 * @head: ead pointer for lists
 * Return: a pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *suiv = NULL;
	listint_t *prec = NULL;

	while (*head)
	{
		suiv = (*(*head)).next;
		(*(*head)).next = prec;
		prec = *head;
		*head = suiv;
	}
	*head = prec;
	return (*head);
}
