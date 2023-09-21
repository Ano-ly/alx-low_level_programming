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
	list_t *iter;

	iter = h;

	while (iter != NULL)
	{
		iter = iter->next;
		count++;
	}
	return (count);
}
