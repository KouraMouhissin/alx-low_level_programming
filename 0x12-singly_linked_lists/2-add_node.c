#include "lists.h"
/**
 * add_node - ajoute un neoud à la fin de la liste
 * @head: pointer vers entete
 * @str: string
 * Return: address de debut
*/

list_t *add_node(list_t **head, const char *str)
{

	size_t slen = 0;
	list_t *nde_no;
	
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

	if (*head == NULL)
	{
		(*nde_no).next = NULL;
	}
	else
	{
		(*nde_no).next = *head;
	}
	(*nde_no).str = strdup(str);
	(*nde_no).len = slen;
	*head = nde_no;
	
	return (*head);
}
