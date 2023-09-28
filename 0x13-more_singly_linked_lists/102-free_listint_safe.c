#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint_safe - also frees lists with a loop
 * @h: pointer to head of linked list to be freed
 *
 * Definition - frees a linked list
 * Return: size of linked list that was freed
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *iter;
	listint_t *next;
	int count;
	p_node *pointer_head;

	if (h == NULL)
		return (0);

	iter = *h;
	count = 0;
	pointer_head = NULL;

	while (find_point(pointer_head, iter) == 0 && iter != NULL)
	{
		next = iter->next;
		add_new_pointer(&pointer_head, iter);
		free(iter);
		count++;
		if (next == iter)
		{
			free_pointerlist(pointer_head);
			/*free(iter->next);*/
			*h = NULL;
			return (count);
		}
		iter = next;
	}
	free_pointerlist(pointer_head);
	free(iter);
	*h = NULL;
	return (count);
}

