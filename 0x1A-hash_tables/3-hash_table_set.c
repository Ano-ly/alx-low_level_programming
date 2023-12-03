#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to hash table
 * @ht: hash table where element is to be added
 * @key: key
 * @value: value associated with key
 * Definition - adds a new element to hash table and handles collisions as well
 * Return: 0 if addition failed, 1 if successful
*/

int hash_table_set(hash_table_t *ht, const char *key,
const char *value)
{
	long int index;
	hash_node_t *new_node;
	hash_node_t *iter;

	if (ht == NULL)
		return (0);
	if ((key == NULL) || (strcmp(key, "") == 0))
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	iter = ht->array[index];
	while (iter != NULL)
	{
		if (strcmp(iter->key, key) == 0)
		{
			strcpy(iter->value, value);
			return (1);
		}
		iter = iter->next;
		continue;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = (char *)strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	else
	{
		iter = ht->array[index];
		ht->array[index] = new_node;
		new_node->next = iter;
		return (1);
	}
	return (0);
}

