#include "lists.h"
/**
 * find_listint_loop - loops finder
 * @head: head
 * Return: address/NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fst = head;
	listint_t *slw = head;

	if (!head)
		return (NULL);

	while (slw && fst && (*fst).next)
	{
		slw = (*slw).next;
		fst = (*((*fst).next)).next;

		if (fst == slw)
		{
			slw = head;
			while (slw != fst)
			{
				fst = (*fst).next;
				slw = (*slw).next;
			}

			return (fst);
		}
	}
	return (NULL);
}
