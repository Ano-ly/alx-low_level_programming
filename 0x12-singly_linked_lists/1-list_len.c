#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - prints the values in a linked list
 * @h: pointer to the first node in list
 * Definition - using while loop to compute the number of elements (nodes)
 * in a linked list
 * Return: number of nodes in the linked list
*/

size_t list_len(const list_t *h)
{
	const list_t *iter;
	int count;

	iter = h;
	count = 0;

	while (iter != NULL)
	{
		iter = iter->next;
		count++;
	}
	return (count);
}
