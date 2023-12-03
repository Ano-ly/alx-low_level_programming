#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(30);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "betty", "cool");
    print_it(ht);
    hash_table_set(ht, "betty", "lov");
    hash_table_set(ht, "bet", "cool");
    print_it(ht);
    return (EXIT_SUCCESS);
}
