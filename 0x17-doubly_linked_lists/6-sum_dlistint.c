#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - sums the values in the nodes of a list
 * @head: pointer to the first node of the list
 * Description - sums the integer values of all nodes of a linked list
 * Return: sum of values
*/

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *iter;

	if (head == NULL)
		return (0);
	sum = 0;
	iter = head;

	while (iter != NULL)
	{
		sum += iter->n;
		iter = iter->next;
	}
	return (sum);
}
