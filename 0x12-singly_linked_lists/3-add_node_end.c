#include "lists.h"
/**
 * add_node_end - ajout du noeud
 * @head: entete
 * @str: string
 * Return: pointer entete
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nde_n, *tmp;
	size_t slen = 0;

	if (str == NULL)
	{
		slen = 0;
	}

	while (str[slen] != '\0')
	{
		slen++;
	}

	nde_n = malloc(sizeof(list_t));
	if (nde_n == NULL)
		return (NULL);

	(*nde_n).str = strdup(str);
	(*nde_n).len = slen;
	(*nde_n).next = NULL;

	tmp = *head;

	if (tmp == NULL)
		*head = nde_n;
	else
	{
		while ((*tmp).next != NULL)
			tmp = (*tmp).next;
		(*tmp).next = nde_n;
	}

	return (*head);
}
