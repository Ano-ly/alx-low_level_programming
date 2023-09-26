#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint - frees a linked list with integer values
 * @head: pointer to the first node in linked list to be freed
 * Definition - frees linked list
 * Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *iter;
	listint_t *store;

	iter = head;

	while (iter != NULL)
	{
		store = iter->next;
		free(iter);
		iter = store;
	}
}
