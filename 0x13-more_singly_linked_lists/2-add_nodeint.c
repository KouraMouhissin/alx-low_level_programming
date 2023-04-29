#include "lists.h"
/**
 * add_nodeint - for node at the beginig
 * @head: lst head
 * @n: an int
 * Return: an address/a nUll
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nde;

	nde = malloc(sizeof(listint_t) * 4);

	if (nde != NULL)
	{
		(*nde).n = n;
		(*nde).next = *head;
		*head = nde;
	}
	else
		return (NULL);

	return (*head);
}
