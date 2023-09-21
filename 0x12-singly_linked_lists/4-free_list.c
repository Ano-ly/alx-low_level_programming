#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * free_list - frees a linked list
 * @head: pointer to first node in linked list
 * Description - frees linked list by freeing string value content, then node
 * Return: void
*/

void free_list(list_t *head)
{
	list_t *iter;
	list_t *store;

	iter = head;
	while (iter != NULL)
	{
		free(iter->str);
		store = iter->next;
		free(iter);
		iter = store;
	}
}
