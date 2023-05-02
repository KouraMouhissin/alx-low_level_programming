#include "lists.h"
#include <stdio.h>
/**
 * looped_listint_len - number counts
 * @head: head pointer
 * Return: 0 or int
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *twase, *lvre;
	size_t ndes = 1;

	if (head == NULL || (*head).next == NULL)
		return (0);
	twase = (*head).next;
	lvre = (*((*head).next)).next;
	while (lvre)
	{
	if (twase == lvre)
	{
		twase = head;
		while (twase != lvre)
		{
			ndes = ndes + 1;
			twase = (*twase).next;
			lvre = (*lvre).next;
		}
		twase = (*twase).next;
		while (twase != lvre)
		{
			ndes = ndes + 1;
			twase = (*twase).next;
		}
		return (ndes);
	}
	twase = (*twase).next;
	lvre = (*((*lvre).next)).next;
	}
	return (0);
}
/**
 * print_listint_safe - print
 * @head: head pointer
 * Return: int
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t ndes, index = 0;

	ndes = looped_listint_len(head);
	if (ndes == 0)
	{
		for (; head != NULL; ndes++)
		{
			printf("[%p] %d\n", (void *)head, (*head).n);
			head = (*head).next;
		}
	}
	else
	{
		for (index = 0; index < ndes; index++)
		{
			printf("[%p] %d\n", (void *)head, (*head).n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, (*head).n);
	}
	return (ndes);
}
