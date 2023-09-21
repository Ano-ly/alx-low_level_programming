#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_list - prints the values in a linked list
 * @h: pointer to the first node in list
 * Definition - using while loop to print values in a linked list
 * Return: number of nodes in the linked list
*/

size_t print_list(const list_t *h)
{
	const list_t *iter;
	char *iter_s;
	int count;
	unsigned int len;

	iter = h;
	count = 0;

	while (iter != NULL)
	{
		iter_s = iter->str;
		len = iter->len;
		if (iter_s == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", len, iter_s);
		count++;
		iter = iter->next;
	}
	return (count);
}
