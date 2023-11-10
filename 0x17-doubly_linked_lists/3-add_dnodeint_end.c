#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first node
 * @n: integer value
 * Definition - adds a node to the end of a doubly linked list
 * Return: address of the new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *iter;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		iter = *head;
		while (iter != NULL)
		{
			if (iter->next == NULL)
			{
				iter->next = new;
				new->prev = iter;
				break;
			}
			else
				iter = iter->next;
		}
	}
	return (new);
}

