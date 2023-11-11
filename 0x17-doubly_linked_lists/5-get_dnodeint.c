#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at an index in a doubly linked list
 * @head: pointer to first node in list
 * @index: the index whose node is to be gotten
 * Description - gets node at an index in a doublylinked list
 * Return: pointer to node, else NULL if failed.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len;
	dlistint_t *iter;
	unsigned int count;

	len = dlistint_len(head);

	if ((index >= len) || (head == NULL))
		return (NULL);
	iter = head;
	while (iter != NULL)
	{
		if (count == index)
			return (iter);
		count++;
		iter = iter->next;
	}
	return (NULL);
}

/**
 * dlistint_len - computes the number of elements in a linked list
 * @h: head of list to be printed
 * Definition - computes number of nodes
 * Return: numebr of nodes in the list
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *iter;
	size_t count;

	iter = h;
	count = 0;

	while (iter != NULL)
	{
		count++;
		iter = iter->next;
	}
	return (count);
}
