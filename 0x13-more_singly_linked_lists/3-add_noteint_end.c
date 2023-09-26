#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_nodeint_end - adds a new node to the end of a linked list
 * @head: pointer to head
 * @n: integer value to be in new node
 * Definition - adds a new node to the end of a linked list
 * the new node points to NULL
 * Return: pointer to new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *iter;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	iter = *head;

	if (iter == NULL)
		*head = new;
	else
	{
		while (iter != NULL)
		{
			if (iter->next == NULL)
			{
				iter->next = new;
				break;
			}
			iter = iter->next;
		}
	}

	return (new);
}
