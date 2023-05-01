#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a nnode node in a linked list,
 * at a given positio
 * @head: pointer to the first node in the lis
 * @idx: index where the nnode node is adde
 * @n: data to insert in the nnode node
 * Return: pointer to the nnode node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *nnode;
	listint_t *tmp = *head;

	nnode = malloc(sizeof(listint_t));

	if (!nnode || !head)
		return (NULL);

	nnode->n = n;
	nnode->next = NULL;

	if (idx == 0)
	{
		nnode->next = *head;
		*head = nnode;
		return (nnode);
	}

	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			nnode->next = tmp->next;
			tmp->next = nnode;
			return (nnode);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
