#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * pop_listint - gets rid of the head node of a linked list
 * @head: pointer to head of linked list
 * Definition - pops a stack, essentially
 * Return: value in deleted node
*/

int pop_listint(listint_t **head)
{
	int val;
	listint_t *new_head;
	listint_t *hd;

	hd = *head;

	if (hd == NULL)
		return (0);
	val = hd->n;
	new_head = hd->next;

	free(hd);
	*head = new_head;

	return (val);

}


