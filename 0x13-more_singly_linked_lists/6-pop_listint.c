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

	if (*head == NULL)
		return (0);
	val = head->n;
	new_head = head->next;
	free(head);
	head = new_head;

	return (val);

}


