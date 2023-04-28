#include "lists.h"
/**
 * add_node - ajoute un neoud à la fin de la liste
 * @head: pointer vers entete
 * @str: string
 * Return: address de debut
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *nde_n;
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

	if (*head == NULL)
	{
		(*nde_n).next = NULL;
	}
	else
	{
		(*nde_n).next = *head;
	}
	(*nde_n).str = strdup(str);
	(*nde_n).len = slen;
	*head = nde_n;
	
	return (*head);
}
