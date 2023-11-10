#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * print_dlistint - prints elements of a dlistint_t list
 * @h: head of list to be printed
 * Definition - prints elemets of a linked list
 * Return: numebr of nodes in the list
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *iter;
	size_t count;

	iter = h;
	count = 0;

	while (iter != NULL)
	{
		printf("%d\n", iter->n);
		count++;
		iter = iter->next;
	}
	return (count);
}
