#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    size_t n;

    head = NULL;
    n = print_dlistint(head);
    printf("-> %lu elements\n", n);
    return (EXIT_SUCCESS);
}
