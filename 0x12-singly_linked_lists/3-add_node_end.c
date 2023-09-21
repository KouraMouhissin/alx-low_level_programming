#include "lists.h"
/**
 * add_node_end - ajout du noeud
 * @head: entete
 * @str: string
 * Return: pointer entete
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nde_no, *tmp;
	size_t slen = 0;

	if (str == NULL)
	{
		slen = 0;
	}

	while (str[slen] != '\0')
	{
		slen++;
	}

	nde_no = malloc(sizeof(list_t));
	if (nde_no == NULL)
		return (NULL);

	(*nde_no).str = strdup(str);
	(*nde_no).len = slen;
	(*nde_no).next = NULL;

	tmp = *head;

	if (tmp == NULL)
		*head = nde_no;
	else
	{
		while ((*tmp).next != NULL)
			tmp = (*tmp).next;
		(*tmp).next = nde_no;
	}

	return (*head);
}
