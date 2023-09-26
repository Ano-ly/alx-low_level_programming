#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

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

