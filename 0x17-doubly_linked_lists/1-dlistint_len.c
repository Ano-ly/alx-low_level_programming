#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

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
