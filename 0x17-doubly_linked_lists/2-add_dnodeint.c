#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a node to the beginning of a doubly linked list
 * @head: pointer to the first node of the linkde list
 * @n: integer value
 * Definition - as stated above
 * Return: pointer to newlu created node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *iter;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	iter = *head;
	*head = new;
	new->n = n;
	new->next = iter;
	new->prev = NULL;
	return (new);
}
