#include "hash_tables.h"

/**
 * key_index - computes an index for a key
 * @key: key whose index is to be computed
 * @size: size of the hash table
 * Definition - computes an index that will always be associated with a key
 * Return: computed index
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int cypher;
	unsigned long int index;

	cypher = hash_djb2(key);
	index = cypher % size;

	return (index);
}
