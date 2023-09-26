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
