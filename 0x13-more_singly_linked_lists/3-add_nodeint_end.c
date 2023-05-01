#include "lists.h"
/**
 * add_nodeint_end - new node on tail
 * @head: lst head
 * @n: int
 * Return: address/null
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nnde;
	listint_t *tmp;

	(void)tmp;

	nnde = malloc(sizeof(listint_t));

	(*nnde).n = n;
	(*nnde).next = NULL;
	tmp = *head;

	if (*head == NULL)
	{
		*head = nnde;
		return (nnde);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = nnde;

	if (nnde == NULL)
		return (NULL);

	return (nnde);
}
