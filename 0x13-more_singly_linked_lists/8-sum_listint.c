#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * sum_listint - conputes the sum of all the values in a linked list
 * @head: pointer to first node in linked list
 * Definition - computes the sum of all data in a linked list
 * Return: sum of all the values
*/

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *iter;

	if (head == NULL)
		return (0);
	iter = head;
	sum = 0;

	while (iter != NULL)
	{
		sum += iter->n;
		iter = iter->next;
	}

	return (sum);
}
