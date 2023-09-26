#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_listint - prints the values in the nodes of a linked list
 * @h: pointer to first node in linked list
 * Definition - prints values stored in nodes
 * Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count;
	const listint_t *iter;
	int _n;

	iter = h;
	count = 0;

	while (iter != NULL)
	{
		_n = iter->n;
		printf("%d\n", _n);
		count++;
		iter = iter->next;
	}
	return (count);
}
