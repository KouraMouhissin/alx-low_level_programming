#include "lists.h"
/**
 * print_listint - prints elements (affiche les elts)
 * @h: list head (tete de la liste)
 * Return: entier
 */

size_t print_listint(const listint_t *h)
{
	size_t nde_nmbr = 0;

	while (h != NULL)
	{
		printf("%d\n", (*h).n);
		return (1 +  print_listint((*h).next));
	}

	return (nde_nmbr);
}

