#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to first node in list
 * Description - frees doubly linked list
 * Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *iter;
	dlistint_t *store_next;

	iter = head;
	while (iter != NULL)
	{
		store_next = iter->next;
		free(iter);
		iter = store_next;
	}
}
