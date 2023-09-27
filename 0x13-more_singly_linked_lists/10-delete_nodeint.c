#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * delete_nodeint_at_index - deletes node at given index
 * @head: pointer to head
 * @index: specified index
 *
 * Description - deletes a specified node
 * Return: 1, is suceeded, -1 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *iter;
	listint_t *iter2;
	listint_t **master;
	int count;
	unsigned int len;

	len = listint_len(*head);
	iter = *head;
	master = head;
	count = -1;

	if (index >= len)
		return (-1);

	while (count != (int)index)
	{
		if (count + 1 == (int)index)
		{
			iter2 = iter->next;
			free(iter);
			*master = iter2;
			return (1);
		}
		master = &iter->next;
		iter = iter->next;
		count++;
	}
	return (1);
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
