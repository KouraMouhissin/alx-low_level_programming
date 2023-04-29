#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - linked list
 * @i: an int
 * @next: next node
 * Description: singly linked list node structure
*/

typedef struct listint_t
{
	int n;
	struct listint_t *next;
} listint_t;

/**
 * struct listint_s - linked list
 * @i: an int
 * @next: next node
 * Description: singly linked list node structure
*/

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);

#endif /* LISTS_H */
