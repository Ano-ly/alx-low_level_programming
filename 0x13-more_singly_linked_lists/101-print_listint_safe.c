#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_listint_safe - a function capable of printing node values
 * of a linked list that has a loop.
 * @head: pointer to first node of linked list to be printed
 *
 * Definition - uses identities of the addresses of its nodes to
 * find a loop and ensure the value of any node is printed only once
 * Return: number of nodes in linked list
*/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *iter;
	int node_count;
	p_node *pointer_head;
	p_node *node_address;

	if (head == NULL)
		return (0);
	iter = head;
	node_count = 0;
	pointer_head = NULL;

	while ((find_point(pointer_head, iter) == 0) && iter != NULL)
	{
		node_address = add_new_pointer(&pointer_head, (listint_t *)iter);
		if (node_address == NULL)
			exit(98);
		printf("[%p] %d\n", (void *)iter, iter->n);
		node_count++;
		iter = iter->next;
	}
	if (find_point(pointer_head, iter) == 1)
	{
		printf("-> [%p] %d\n", (void *)iter, iter->n);
	}
	free_pointerlist(pointer_head);

	return (node_count);
}

/**
 * find_point - searches for a listint_t pointer in the p_node
 * linked list of pointers
 * @pointhead: head of p_node linked list
 * @pointer: pointer to be searched for
 *
 * Definition - this function searches for a pointer
 * Return: 0 if pointer not found, 1 if pointer found
*/

int find_point(p_node *pointhead, const listint_t *pointer)
{
	const p_node *iter;

	iter = pointhead;
	while (iter != NULL)
	{
		if (iter->p == pointer)
			return (1);
		iter = iter->next_node;
	}

	return (0);
}

/**
 * add_new_pointer - adds new node with a pointer to listint_t
 * @pointhead: pointer to head of linkedlist of pointers p_node
 * @p: pointer to be addes to linked list
 *
 * Definition - there's the need to be able to store addresses of listint_t
 * nodes, so as to identify loop cases with multiple nodes pointing to one node
 * Return: pointer to new node
*/

p_node *add_new_pointer(p_node **pointhead, listint_t *p)
{
	p_node *new;

	new = malloc(sizeof(p_node));
	if (new == NULL)
		return (NULL);

	new->p = p;
	new->next_node = *pointhead;
	*pointhead = new;
	return (new);
}

/**
 * free_pointerlist - frees a linked list with pointers
 * @pointhead: pointer to the first node in linked list to be freed
 * Definition - frees linked list
 * Return: void
*/
void free_pointerlist(p_node *pointhead)
{
	p_node *iter;
	p_node *store;

	iter = pointhead;

	while (iter != NULL)
	{
		store = iter->next_node;
		free(iter);
		iter = store;
	}
}


