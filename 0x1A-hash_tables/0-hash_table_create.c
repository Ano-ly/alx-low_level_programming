#include <stdlib.h>
#include <limits.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: size of new hash table to be created
 * Definition - creates a new hash table
 * Return: pointer to new hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	if (size > LONG_MAX)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = calloc(size, sizeof(hash_node_t));

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);

}
