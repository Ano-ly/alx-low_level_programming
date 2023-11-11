#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at an index
 * @head: pointer to the first node
 * @index: index of node to be deleted
 * Description - deletes node
 * Return: 1 if successful, -1 if failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *iter;

	if (head == NULL)
		return (-1);
	if (index >= dlistint_len(*head))
		return (-1);
	count = 0;
	iter = *head;
	if (index == 0)
	{
		if (iter->next != NULL)
			(iter->next)->prev = NULL;
		*head = iter->next;
		free(iter);
	}
	else
	{
	while (iter != NULL)
	{
		iter = iter->next;
		count++;
		if ((count == index) && (count == (dlistint_len(*head) - 1)))
		{
			(iter->prev)->next = NULL;
			free(iter);
		}
		if ((count == index) && (count != (dlistint_len(*head) - 1)))
		{
			(iter->next)->prev = iter->prev;
			(iter->prev)->next = iter->next;
			free(iter);
		}
	}
	}
	return (1);
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
