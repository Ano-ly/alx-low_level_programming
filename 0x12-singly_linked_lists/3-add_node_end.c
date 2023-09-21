#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node_end - adds node to the end of a linked list
 * @head: pointer to pointer that points to first element of linked list
 * @str: string value for node in linked list
 * Definition - adds new node or elemet to end of linked list
 * by traversing the list until it reaches a node that points to null
 * Return: pointer to the new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *iter;
	list_t *new;
	char *str_node;

	str_node = strdup(str);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = str_node;
	new->len = _strlen(str_node);
	new->next = NULL;

	iter = *head;
	if (iter == NULL)
		*head = new;
	else
	{
		while (iter != NULL)
		{
			if (iter->next == NULL)
			{
				iter->next = new;
				break;
			}
			iter = iter->next;
		}
	}
	return (new);

}

/**
  * _strlen - computes the length of a string
  * @str: string whose length is to be computed
  * Description - computes length of string
  * Return: integer, length of string
  */

int _strlen(const char *str)
{
	int i;
	int lenn;

	i = 0;
	lenn = 0;

	while (str[i] != 0)
	{
		lenn++;
		i++;
	}
	return (lenn);
}
