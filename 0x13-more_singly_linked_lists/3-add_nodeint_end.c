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

	nnde = malloc(sizeof(listint_t));

	if (nnde == NULL)
		return (NULL);

	(*nnde).n = n;
	(*nnde).next = NULL;
	tmp = *head;

	if (*head == NULL)
	{
		*head = nnde;
		return (nnde);
	}
	while ((*tmp).next)
	{
		tmp = (*tmp).next;
	}
	(*tmp).next = nnde;

	return (nnde);
}
