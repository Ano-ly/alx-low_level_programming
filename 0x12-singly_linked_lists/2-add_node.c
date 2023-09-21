#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node - adds node at the beginning of a linked list
 * @head: pointer to pointer that points to the first node of
 * a linked list
 * @str: string value of a node
 * Definition - adds node at the beginning of a linked list,
 * by changing pointer values
 * Return: pointer to new node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	len = _strlen(str);
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

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
