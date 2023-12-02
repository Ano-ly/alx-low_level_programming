#include <string.h>
#include <stdlib.h>
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
	int index;
	hash_node_t *new_node;
	hash_node_t *store_placeholder;

	if (key == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = (char *)key;
	new_node->value = strdup(value);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	else
	{
		store_placeholder = ht->array[index];
		ht->array[index] = new_node;
		new_node->next = store_placeholder;
		return (1);
	}
	return (0);
}

