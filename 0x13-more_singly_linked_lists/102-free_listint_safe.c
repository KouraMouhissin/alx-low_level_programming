#include "lists.h"
/**
 * free_listint_safe - list frees
 * @h: first node pointer
 * Return: int
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lenght = 0;
	int dv;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dv = *h - (*(*h)).next;
		if (dv > 0)
		{
			tmp = (*(*h)).next;
			free(*h);
			*h = tmp;
			lenght++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lenght++;
			break;
		}
	}
	*h = NULL;
	return (lenght);
}

