#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * get_nodeint_at_index - gets the node at a specified index
 * @head: pointer to head
 * @index: specified index
 *
 * Definition - returns value of a node at certain index
 * Return: node at that index
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *iter;
	unsigned int count;
	unsigned int len;

	len = listint_len(head);

	if (index >= len)
		return (NULL);
	count = 0;

	iter = head;
	while (count != index)
	{
		iter = iter->next;
		count++;
	}
	return (iter);


}

