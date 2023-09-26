#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * insert_nodeint_at_index - inserts node at given index
 * @head: pointer to head
 * @idx: specified index
 * @n: the value that should be in the new node
 *
 * Description - inserts a new node
 * Return: pointer to new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *iter;
	listint_t **master;
	int count;
	unsigned int len;

	len = listint_len(*head);
	iter = *head;
	master = head;
	count = -1;

	if (idx >= len)
		return (NULL);
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	while (count != (int)idx)
	{
		if (count + 1 == (int)idx)
		{
			new->next = *master;
			*master = new;
			new->n = n;
			break;
		}
		master = &iter->next;
		iter = iter->next;
		count++;
	}
	return (new);

}

/**
 * listint_len - returns number of elements in a linked list
 * @h: pointer to first node in linked list
 * Definition - returns count of nodes
 * Return: number of nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t count;
	const listint_t *iter;

	iter = h;
	count = 0;

	while (iter != NULL)
	{
		count++;
		iter = iter->next;
	}

	return (count);
}
