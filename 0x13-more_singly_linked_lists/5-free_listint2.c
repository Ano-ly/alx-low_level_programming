#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint2 - frees a linked list with integer values and sets
 * head to NULL
 * @head: pointer to pointer to the first node in linked list to be freed
 * Definition - frees linked list and sets head to NULL
 * Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *iter;
	listint_t *store;

	if (head != NULL)
	{
		iter = *head;

		while (iter != NULL)
		{
			store = iter->next;
			free(iter);
			iter = store;
		}
		*head = NULL;
	}
}
